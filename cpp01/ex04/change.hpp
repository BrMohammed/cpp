#ifndef CHANGE_HPP
#define CHANGE_HPP

#include <iostream>
#include <cstring>
#include <fstream>

class Change
{
    private :
        void creation(std::string fill_name, std::string s1, std::string s2);
        void replace(std::string &src, std::string s1, std::string s2,int begin);
    public :
        Change(std::string fill_name, std::string s1, std::string s2);
};

#endif