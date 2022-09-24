#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap : Default constructor called" << std::endl;
    this->_Name = "boot";
    _HitPoint = 100;
    _Energypoints = 50;
    _AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap : constructor called" << std::endl;
    this->_Name = name;
    _HitPoint = 100;
    _Energypoints = 50;
    _AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & other)
{
    std::cout << "ScavTrap : copy constructor called" << std::endl;
    *this = other;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "ScavTrap : copy assignment operator called" << std::endl;
    this->_Name = rhs._Name;
    this->_HitPoint = rhs._HitPoint;
    this->_AttackDamage = rhs._AttackDamage;
    this->_Energypoints = rhs._Energypoints;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_Energypoints > 0 && this->_HitPoint > 0)
    {
        --this->_Energypoints;
        std::cout << "ScavTrap " << this->_Name << " attacks "  << target << " , causing " << this->_AttackDamage << " points of damage!" << std::endl;
    }
    else
       std::cout << "ScavTrap " << this->_Name << "have no energy points or hit point  left" << std::endl; 
}
