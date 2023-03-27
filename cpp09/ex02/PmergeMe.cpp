#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): error(false){}
bool isNumber(const std::string& s)
{
    for (int i = 0 ; i < (int)s.length();i++)
    {
        if (isalpha(s[i]) == 1)
            return false;
    }
    return true;
}
PmergeMe::PmergeMe(char **input)
{
    for(int i = 1; input[i] != '\0' ;i++)
    {
        if(isNumber(std::string(input[i]).c_str()))
        {
            if(atoi(std::string(input[i]).c_str()) < 0)
            {
                error = true;
                break;
            }
            else
                data.push_back(atoi(std::string(input[i]).c_str()));
                data_01.push_back(atoi(std::string(input[i]).c_str()));
        }
        else
        {
            error = true;
            break;
        }
    }
    mergeSort(data, 0, data.size() - 1);
    for(int i = 0 ; i < (int) data.size() ; i++)
        std::cout << data[i]  << " ";
    std::cout << std::endl;
    mergeSort(data_01, 0, data.size() - 1);
    for(int i = 0 ; i < (int) data.size() ; i++)
        std::cout << data[i]  << " ";
    std::cout << std::endl;
}
PmergeMe::PmergeMe(PmergeMe const & other){ *this = other;}
PmergeMe::~PmergeMe(){}
PmergeMe & PmergeMe::operator = (PmergeMe const & rhs)
{ 
    data = rhs.data;
    return *this;
}
template <typename T>
void PmergeMe::mergeSort(T &vec, int s, int e)
{
    if (e - s  <= 1)
        return; 
    int m = (e + s) / 2;
    mergeSort(vec, s, m);
    mergeSort(vec, m + 1, e);
    merge(vec, s, m, e);
}
template <typename T>
void PmergeMe::merge(T &vec, int s, int m, int e)
{
    int n1 = m - s + 1;
    int n2 = e - m;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = vec[s + i];
    for (int j = 0; j < n2; j++)
        M[j] = vec[m + 1 + j];
    int i, j, k;
    i = 0;
    j = 0;
    k = s;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= M[j]) 
        {
            vec[k] = L[i];
            i++;
        } 
        else 
        {
            vec[k] = M[j];
            j++;
        }
        k++;
    }
  while (i < n1) 
  {
    vec[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) 
  {
    vec[k] = M[j];
    j++;
    k++;
  }
}