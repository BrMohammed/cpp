#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap : Default constructor called" << std::endl;
    this->_Name = "von";
    _HitPoint = 10;
    _Energypoints = 10;
    _AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap : constructor called" << std::endl;
    this->_Name = name;
    _HitPoint = 10;
    _Energypoints = 10;
    _AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & other)
{
    std::cout << "ClapTrap : copy constructor called" << std::endl;
    *this = other;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "ClapTrap : copy assignment operator called" << std::endl;
    this->_Name = rhs._Name;
    this->_HitPoint = rhs._HitPoint;
    this->_AttackDamage = rhs._AttackDamage;
    this->_Energypoints = rhs._Energypoints;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap : Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_Energypoints > 0 && this->_HitPoint > 0)
    {
        --this->_Energypoints;
        std::cout << "ClapTrap " << this->_Name << " attacks "  << target << " , causing " << this->_AttackDamage << " points of damage!" << std::endl;
    }
    else
       std::cout << "ClapTrap " << this->_Name << "have no energy points or hit point  left" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_HitPoint > 0)
    {
        --this->_HitPoint;
        std::cout << "ClapTrap " << this->_Name << " taks Damage of " << amount << " hit point left : " << this->_HitPoint << std::endl;
    }
    else
        std::cout << "clapTrap" << this->_Name << " have no hit point left " << std::endl; 
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_Energypoints > 0 && this->_HitPoint > 0)
    {
         --this->_Energypoints;
        this->_HitPoint += amount;
        std::cout << "ClapTrap " << this->_Name << " repairs itself,  gets " << amount  << " hit points back , residual energy poit to :  " <<this->_Energypoints << std::endl;
    }
    else
       std::cout << "ClapTrap " << this->_Name << "have no energy points or hit point  left" << std::endl; 
}
