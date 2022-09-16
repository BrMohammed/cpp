#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cstring>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon();
        Weapon(std::string weapon);
        std::string getType();
        void setType(std::string type);

};

#endif