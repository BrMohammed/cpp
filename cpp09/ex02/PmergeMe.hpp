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
        std::vector<int> data;
        std::deque<int> data_01;
        template <typename T>
        void merge(T &cont, int s, int m, int e);
        template <typename T>
        void mergeSort(T & cont, int s, int e);
        bool error;
        void small_sort();
        void big_sort();
        template <typename T>
        void merge_insert(T &cont);
    public:
        PmergeMe();
        PmergeMe(char **input);
        PmergeMe(PmergeMe const & other);
        ~PmergeMe();
        PmergeMe &operator = (PmergeMe const & rhs);
        void sort();
    
};

#endif