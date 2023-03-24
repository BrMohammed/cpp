#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::string buffer;
    myfile.open("data.csv");
    if ( myfile.is_open() )
    { 
        for(int i = 0; myfile.good() ;i++ )
        {
            myfile >> buffer;
            if(i != 0)
            {
                std::cout << buffer << std::endl;
                fille_map(buffer);
            }
        }
    }
    std::map<std::string,float>::iterator it;
    for(it=data.begin();it !=data.end();++it)
    {
       std::cout << it->first << ' ' <<it->second  <<std::endl;
    }
    myfile.close();
}
BitcoinExchange::BitcoinExchange(std::map<std::string,float> &other) : data(other){}
BitcoinExchange::BitcoinExchange(BitcoinExchange const & other)
{
    *this = other;
}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange & BitcoinExchange::operator = (BitcoinExchange const &rhs)
{
    data = rhs.data;
    return *this;
}

void BitcoinExchange::fille_map(std::string &str)
{
    std::string buffer;
    data.insert(std::make_pair(str.substr(0,str.find(",")),atof(str.substr(str.find(",") + 1).c_str())));
}