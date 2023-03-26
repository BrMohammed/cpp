#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    if(argc == 2)
    {
        BitcoinExchange bt(std::string(argv[1]).c_str());
        bt.result_of_the_value();
    }
     else
        std::cerr << "Error: could not open file." << std::endl;
    return 0;
}