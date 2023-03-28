#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <ctime>
#include <stdlib.h>

class BitcoinExchange
{

    private:
        std::map<std::string,float> data;
        std::string input;
        std::ifstream myfile;
        void fille_map();
        int chek_if_valid_date(std::string &str);
        bool error;
        
    public:
        BitcoinExchange();
        BitcoinExchange(std::string const &str);
        BitcoinExchange(BitcoinExchange const & other);
        ~BitcoinExchange();
        BitcoinExchange & operator = (BitcoinExchange const &rhs);
        void  result_of_the_value();

};

#endif