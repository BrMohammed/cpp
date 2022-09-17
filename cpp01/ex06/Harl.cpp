#include "Harl.hpp"

 void Harl::debug( void )
 {
    std::cout << " [DEBUG] " << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
 }
void Harl::info( void )
{
    std::cout << " [INFO] " << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn t pute  nough bacon in my burger! If you did, I wouldn t be asking for more! " << std::endl;
}
void Harl::warning( void )
{
    std::cout << " [WARNING] " << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << " [ERROR] " << std::endl;
    std::cout << " This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
   std::string comp1[] = {"DEBUG","INFO","WARNING","ERROR"};
   int type = -1;

    for (int i = 0; i < 4; i++)
    {
        if(level == comp1[i])
            type = i;
    }
    switch (type)
    {
        case 0:
            debug();
            type++;
        case 1:
            info();
            type++;
        case 2:
            warning();
            type++;
        case 3:
            error();
            break;
        default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    
}