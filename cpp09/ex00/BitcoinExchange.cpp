#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : input(""),error(false)
{
    fille_map();
}
BitcoinExchange::BitcoinExchange(std::string const &str) : input(str) , error(false)
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
    error = rhs.error;
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
    else
        error = true;
    myfile.close();
}

bool isNumber( std::string & s)
{
    bool is_point = false;
    bool is_space = false;
    bool is_negative = false;
    for (int i = 0 ; i < (int)s.length();i++) 
    {
        if(s[i] == 32 && is_space == false )
        {
            is_space = true;
            s.erase(i,1);
            i--;
        }
        else
        {
            if(s[i] == ',')
                s[i] = '.';
            if((s[i] == '.' && is_point == false) )
            {
                is_point = true;
                i++;
            }  
            else if(is_negative == false && s[i] == '-')
            {
                is_negative = true;
                i++;
            }  
            else if ((isnumber(s[i]) == 0))
                return false;
        }

    }
    return true;
}
void  BitcoinExchange::result_of_the_value()
{
    std::string buffer;
    std::string buffer2;
    std::string c;
    std::string date = "";
    float   value ;
    double pos = 0;
    if(error)
    {
         std::cerr << "Error: bad input" << std::endl;
         return;
    }
    myfile.open(input);
    if(myfile.is_open() )
    { 
        for(int i = 0; myfile.good() ;i++ )
        {
            std::getline (myfile, buffer);
            if(i != 0 || (buffer[0] >= '0' && buffer[0] <= '9') )
            {
                pos = buffer.find("|");
                if(pos != std::string::npos)
                {
                    date = buffer.substr(0,pos - 1);
                    buffer2 = buffer.substr(pos + 1);
                    if(chek_if_valid_date(date) == 1)
                    {
                        std::cerr << "Error: bad input => " << buffer << std::endl;
                        continue;
                    }
                    if(buffer.substr(pos + 1).empty() || !isNumber(buffer2))
                    {
                        std::cerr << "Error: bad input => " << buffer << std::endl;
                        continue;
                    }
                    value = atof(buffer2.c_str());
                    if(value < 0)
                        std::cerr << "Error: not a positive number. "<< std::endl;
                    else if(value > 1000)
                        std::cerr << "Error: too large a number."<< std::endl;
                    else if(!data.find(date)->first.empty())
                        std::cout << date << " => " << value << " = " << data.find(date)->second * value  <<   std::endl;
                    else
                    {
                        std::map<std::string,float>::iterator it = data.lower_bound(date);
                        --it;
                        std::cout << date << " => " << value << " = " << it->second * value  <<   std::endl;
                    }
                }
                else
                    std::cerr << "Error: bad input => " << buffer << std::endl;
            }  
        }
    }
    else
        std::cerr << "Error: bad input" << std::endl;
    if(input == "")
        std::cerr << "Error: bad input" << std::endl;

}

int BitcoinExchange::chek_if_valid_date(std::string &str)
{
    std::string buffer;
    struct  tm t;
    t.tm_year = 0;
    t.tm_mon = 0;
    t.tm_mday = 0;
    for(int i = 0 ; i < (int)str.length();i++)
    {
        if(str[i] == '-')
        {   
            if(str[i - 1] == '-' || i == 0)
                return 1;
            if(t.tm_year == 0)
                t.tm_year = atoi(buffer.c_str());
            else if(t.tm_mon == 0)
                t.tm_mon = atoi(buffer.c_str());
            else if(t.tm_mday == 0)
                t.tm_mday = atoi(buffer.c_str());
            buffer.clear();
        }
        else if(str[i] >= '0' && str[i] <= '9')
            buffer+= str[i];
        if( i == (int)str.length() - 1 )
        {
            if(t.tm_mday == 0 && t.tm_year != 0 &&  t.tm_mon != 0)
                 t.tm_mday = atoi(buffer.c_str());
            else
                return 1;
        }
    }
    if(t.tm_year < 2009 || t.tm_year > 2022)
        return 1;
    else  if(t.tm_mon < 1 || t.tm_mon > 12)
        return 1;
     else if(t.tm_mday < 1 || t.tm_mday > 31)
        return 1;
    if(t.tm_mon == 2 && t.tm_mday > 29)
         return 1;
    return 0;
}