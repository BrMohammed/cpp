#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    std::cout << "FragTrap : Default constructor called" << std::endl;
    this->_Name = "boot";
    _HitPoint = 100;
    _Energypoints = 100;
    _AttackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap : constructor called" << std::endl;
    this->_Name = name;
    _HitPoint = 100;
    _Energypoints = 100;
    _AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & other)
{
    std::cout << "FragTrap : copy constructor called" << std::endl;
    *this = other;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "FragTrap : copy assignment operator called" << std::endl;
    this->_Name = rhs._Name;
    this->_HitPoint = rhs._HitPoint;
    this->_AttackDamage = rhs._AttackDamage;
    this->_Energypoints = rhs._Energypoints;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap : Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap positive high fives " << std::endl;
}
