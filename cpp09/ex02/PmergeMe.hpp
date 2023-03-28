#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <chrono>
#include <ctime> 
#include <iomanip>

class PmergeMe
{
    private:
        std::vector<int> data_vec;
        std::deque<int> data_que;
        void mergeSort_vec(std::vector<int> & vec, int s, int e,int threshold);
        void insertion_sort_vec( std::vector<int> &vec,size_t s, size_t e);
        void mergeSort_que(std::deque<int> & que, int s, int e,int threshold);
        void insertion_sort_que( std::deque<int> &que,size_t s, size_t e);
        bool error;
    public:
        PmergeMe();
        PmergeMe(char **input);
        PmergeMe(PmergeMe const & other);
        ~PmergeMe();
        PmergeMe &operator = (PmergeMe const & rhs);
        void sort();
    
};

#endif