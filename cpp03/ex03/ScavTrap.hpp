#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & other);
        ~ScavTrap();
        ScavTrap & operator = (ScavTrap const &rhs);
        void guardGate();
        void attack(const std::string& target);
};
#endif