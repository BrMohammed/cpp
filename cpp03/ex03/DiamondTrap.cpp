#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("boot_clap_name")
{
    std::cout << "DiamondTrap : Default constructor called" << std::endl;
    _Name = "boot";
    this->_Energypoints = ScavTrap::_Energypoints;
    this->_HitPoint =  FragTrap::_HitPoint;
    this->_AttackDamage = FragTrap::_AttackDamage ;
}
DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap : constructor called" << std::endl;
    ClapTrap::_Name = name + "_clap_name";
    this->_Name = name;
    this->_Energypoints = ScavTrap::_Energypoints;
    this->_HitPoint =  FragTrap::_HitPoint;
    this->_AttackDamage = FragTrap::_AttackDamage;
}
DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
    std::cout << "DiamondTrap : copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap : Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    this->ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap const &rhs)
{
    std::cout << "DiamondTrap : copy assignment operator called" << std::endl;
    this->_Name = rhs._Name;
    this->_HitPoint = rhs._HitPoint;
    this->_AttackDamage = rhs._AttackDamage;
    this->_Energypoints = rhs._Energypoints;
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << this->_Name << " " << ClapTrap::_Name << std::endl;
    //std::cout << "_Energypoints S: "<< this->_Energypoints << " _AttackDamage : "<< this->_AttackDamage <<   " _HitPoint : " << this->_HitPoint << std::endl; 
}
