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
                data.push_back(atoi(std::string(input[i]).c_str()));
                data_01.push_back(atoi(std::string(input[i]).c_str()));
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
    data = rhs.data;
    return *this;
}
void PmergeMe::sort()
{
    int prefix = 11;
    if(!error)
    {
        if((int)data.size() < prefix)
            small_sort();
        else
            big_sort();
    }
    else
        std::cerr << "ERROR" << std::endl;
    
}

void PmergeMe::small_sort ()
{
    double result_vec ;
    double result_deque ;
    std::clock_t end;
    std::clock_t start;
    std::cout << "Before: ";
    for(int i = 0 ; i < (int) data.size() ; i++)
        std::cout << data[i]  << " ";
    std::cout << std::endl;
    start = std::clock();
    merge_insert(data);
    end = std::clock();
    result_vec = static_cast<double>(end - start) / CLOCKS_PER_SEC ;
    start = std::clock();
    merge_insert(data_01);
    end = std::clock();
    result_deque = static_cast<double>(end - start) / CLOCKS_PER_SEC ;
    std::cout << "After: ";
    for(int i = 0 ; i < (int) data_01.size() ; i++)
        std::cout <<  data_01[i]  << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of "<< data.size() << "elements with std::vector : "<< std::fixed << result_vec << " us" << std::endl;
    std::cout << "Time to process a range of "<< data_01.size() << "elements with std::deque : " << std::fixed  << result_deque << " us" << std::endl;
}
template<typename T>
void PmergeMe::merge_insert(T &cont)
{
    size_t buffer;
    for(size_t i = 0 ;i < cont.size(); i++)
    {
        for(size_t j = i ; j < cont.size(); j++)
        {
            if(cont[i] > cont[j])
            {
                buffer = cont[i];
                cont[i] = cont[j];
                cont[j] = buffer;
            }
        }
    }

}

void PmergeMe::big_sort ()
{
    double result_vec ;
    double result_deque ;
    std::clock_t end;
    std::clock_t start;
    std::cout << "Before: ";
    for(int i = 0 ; i < (int) data.size() ; i++)
        std::cout << data[i]  << " ";
    std::cout << std::endl;
    start = std::clock();
    mergeSort(data, 0, data.size() - 1);
    end = std::clock();
    result_vec = static_cast<double>(end - start) / CLOCKS_PER_SEC ;
    start = std::clock();
    mergeSort(data_01, 0, data_01.size() - 1);
    end = std::clock();
    result_deque = static_cast<double>(end - start) / CLOCKS_PER_SEC ;
    std::cout << "After: ";
    for(int i = 0 ; i < (int) data_01.size() ; i++)
        std::cout <<  data_01[i]  << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of "<< data.size() << "elements with std::vector : "<< std::fixed << result_vec << " us" << std::endl;
    std::cout << "Time to process a range of "<< data_01.size() << "elements with std::deque : " << std::fixed  << result_deque << " us" << std::endl;
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
    int i, j, k;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = vec[s + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];
    i = 0;
    j = 0;
    k = s;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            vec[k] = L[i];
            i++;
        } 
        else 
        {
            vec[k] = R[j];
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
        vec[k] = R[j];
        j++;
        k++;
    }
}