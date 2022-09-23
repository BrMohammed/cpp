#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected :
        std::string _Name;
        int _HitPoint ;
        int _Energypoints;
        int _AttackDamage;
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & other);
        ~ClapTrap();
        ClapTrap & operator = (ClapTrap const &rhs);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif