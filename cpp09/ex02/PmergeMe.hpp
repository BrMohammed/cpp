#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
    private:
        std::vector<int> data;
        std::deque<int> data_01;
        template <typename T>
        void merge(T &vec, int s, int m, int e);
        template <typename T>
        void mergeSort(T &vec, int s, int e);
        bool error;
    public:
        PmergeMe();
        PmergeMe(char **input);
        PmergeMe(PmergeMe const & other);
        ~PmergeMe();
        PmergeMe &operator = (PmergeMe const & rhs);
    
};

#endif