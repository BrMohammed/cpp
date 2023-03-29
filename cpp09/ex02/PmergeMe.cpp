#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): error(true){}
bool isNumber(const std::string& s)
{
    for (int i = 0 ; i < (int)s.length();i++)
    {
        if (isnumber(s[i]) == 0)
            return false;
    }
    return true;
}
PmergeMe::PmergeMe(char **input) : error(false)
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
                data_vec.push_back(atoi(std::string(input[i]).c_str()));
                data_que.push_back(atoi(std::string(input[i]).c_str()));
        }
        else
        {
            error = true;
            break;
        }
    }
   
}
PmergeMe::PmergeMe(PmergeMe const & other){ *this = other;}
PmergeMe::~PmergeMe(){}
PmergeMe & PmergeMe::operator = (PmergeMe const & rhs)
{ 
    data_vec = rhs.data_vec;
    data_que = rhs.data_que;
    return *this;
}
void PmergeMe::sort()
{
    if(!error)
    {
         double result_vec ;
        double result_deque ;
        std::clock_t end;
        std::clock_t start;
        std::cout << "Before: ";
        for(int i = 0 ; i < (int) data_vec.size() ; i++)
            std::cout << data_vec[i]  << " ";
        std::cout << std::endl;
        start = std::clock();
        mergeSort_vec(data_vec, 0, data_vec.size() - 1,10);//
        end = std::clock();
        result_vec = static_cast<double>(end - start) / CLOCKS_PER_SEC ;
        start = std::clock();
        mergeSort_que(data_que, 0, data_que.size() - 1,10);//
        end = std::clock();
        result_deque = static_cast<double>(end - start) / CLOCKS_PER_SEC ;
        std::cout << "After: ";
        for(int i = 0 ; i < (int) data_vec.size() ; i++)
            std::cout <<  data_vec[i]  << " ";
        std::cout << std::endl;
        std::cout << "Time to process a range of "<< data_vec.size() << " elements with std::vector : "<< std::fixed << result_vec << " us" << std::endl;
        std::cout << "Time to process a range of "<< data_que.size() << " elements with std::deque : " << std::fixed  << result_deque << " us" << std::endl;
    }
    else
        std::cerr << "ERROR" << std::endl;
}

void PmergeMe::insertion_sort_vec(std::vector<int> &vec,size_t s, size_t e)
{
    size_t buffer;
    for(size_t i = s ;i <= e; i++)
    {
        for(size_t j = i + 1 ; j <= e; j++)
        {
            if(vec[i] > vec[j])
            {
                buffer = vec[i];
                vec[i] = vec[j];
                vec[j] = buffer;
            }
        }
    }
}
void PmergeMe::mergeSort_vec(std::vector<int> &vec, int s, int e,int threshold)
{
    if(s < e)
    {
        if ((e - s) <= threshold)
        {
            insertion_sort_vec(vec, s, e);
            return;
        }
        int m = (e + s) / 2;
        mergeSort_vec(vec, s, m,threshold);
        mergeSort_vec(vec, m + 1, e,threshold);
        merge_vec(vec, s, m, e);
    }
}

void PmergeMe::merge_vec(std::vector<int> &vec, int s, int m, int e)
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



void PmergeMe::insertion_sort_que(std::deque<int> &que,size_t s, size_t e)
{
    size_t buffer;
    for(size_t i = s ;i <= e; i++)
    {
        for(size_t j = i ; j <= e; j++)
        {
            if(que[i] > que[j])
            {
                buffer = que[i];
                que[i] = que[j];
                que[j] = buffer;
            }
        }
    }

}
void PmergeMe::mergeSort_que(std::deque<int> &que, int s, int e,int threshold)
{
    if(s < e)
    {
        if ((e - s) <= threshold)
        {
            insertion_sort_que(que, s, e);
            return;
        }
        int m = (e + s) / 2;
        mergeSort_que(que, s, m,threshold);
        mergeSort_que(que, m + 1, e,threshold);
        merge_que(que, s, m, e);
    }
}

void PmergeMe::merge_que(std::deque<int> &que, int s, int m, int e)
{
    int n1 = m - s + 1;
    int n2 = e - m;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = que[s + i];
    for (int j = 0; j < n2; j++)
        M[j] = que[m + 1 + j];
    int i, j, k;
    i = 0;
    j = 0;
    k = s;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= M[j]) 
        {
            que[k] = L[i];
            i++;
        } 
        else 
        {
            que[k] = M[j];
            j++;
        }
        k++;
    }
  while (i < n1) 
  {
    que[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) 
  {
    que[k] = M[j];
    j++;
    k++;
  }
}
