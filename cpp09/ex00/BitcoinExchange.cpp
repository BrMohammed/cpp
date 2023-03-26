#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : input("")
{
    fille_map();
}
BitcoinExchange::BitcoinExchange(std::string const &str) : input(str)
{
    fille_map();
}
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

void BitcoinExchange::fille_map()
{
    std::string buffer;
    data.clear();
    myfile.open("data.csv");
    if(myfile.is_open() )
    { 
        for(int i = 0; myfile.good() ;i++ )
        {
            myfile >> buffer;
            if(i != 0)
                data.insert(std::make_pair(buffer.substr(0,buffer.find(",")),atof(buffer.substr(buffer.find(",") + 1).c_str())));
        }
    }
    // std::map<std::string,float>::iterator it;
    // for(it=data.begin();it !=data.end();++it)
    // {
    //    std::cout << it->first << '*' <<it->second  <<std::endl;
    // }
    myfile.close();
}
void  BitcoinExchange::result_of_the_value()
{
    std::string buffer;
    std::string date = "";
    float   value ;
    double pos = 0;
    myfile.open(input);
    if(myfile.is_open() )
    { 
        for(int i = 0; myfile.good() ;i++ )
        {
            std::getline (myfile, buffer);
            if(i != 0)
            {
                pos = buffer.find("|");
                if(pos != std::string::npos)
                {
                    date = buffer.substr(0,pos - 1);
                    value = atof(buffer.substr(pos + 1).c_str());
                    if(value == 0)
                        std::cerr << "Error: bad number => " << buffer.substr(pos + 1).c_str() << std::endl;
                    else if(value < 0)
                        std::cerr << "Error: not a positive number. "<< std::endl;
                    else if(value > 1000)
                        std::cerr << "Error: too large a number."<< std::endl;
                    else if(data.find(date)->first.empty())
                        std::cerr << "Error: date not found => " << date << std::endl;
                    else
                        std::cout << date << " => " << value << " = " << data.find(date)->second * value << std::endl;
                }
                else
                    std::cerr << "Error: bad input => " << buffer << std::endl;
                
            }
               
        }
    }
    if(input == "")
        std::cerr << "Error: bad input" << std::endl;

}