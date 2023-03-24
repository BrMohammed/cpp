#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{

    private:
        std::map<std::string,float> data;
        std::ifstream myfile;
        void fille_map(std::string &str);
    public:
        BitcoinExchange();
        BitcoinExchange(std::map<std::string,float> &other);
        BitcoinExchange(BitcoinExchange const & other);
        ~BitcoinExchange();
        BitcoinExchange & operator = (BitcoinExchange const &rhs);


};

#endif