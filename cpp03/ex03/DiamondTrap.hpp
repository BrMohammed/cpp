#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap ,  public ScavTrap
{
    std::string _Name;
    int _HitPoint ;
    int _Energypoints;
    int _AttackDamage;
    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &other);
        ~DiamondTrap();
        DiamondTrap &operator=(DiamondTrap const &hrs);
        void whoAmI();
        void attack(const std::string& target);
};
#endif