#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{std::cout << "Destructor called on ClapTrap :" << _name << std::endl;}

ClapTrap::ClapTrap()
{
    _name = "Default";
    _hitPoints = 10;
    _attackDamage = 0;
    _energyPoints = 10;
    std::cout << "Default Constructor called on ClapTrap :Default" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name; 
    _hitPoints = 10; 
    _attackDamage = 0; 
    _energyPoints = 10;
    std::cout << "Paramerized Constructor called on ClapTrap :" << name << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "Copy Constructor called on ClapTrap :" << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _attackDamage = other._attackDamage; 
    _energyPoints = other._energyPoints;
    std::cout << "Copy assignment operator called on ClapTrap :" << _name << std::endl;
    return *this;
}

void ClapTrap::attack(std::string target)
{
    if (_hitPoints && _energyPoints)
    {
        std::cout << "ClapTrap "<< _name << " attacks " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints)
    {
        _hitPoints -= amount;
        if (_hitPoints < 0)
            _hitPoints = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints && _energyPoints)
    {
        if (__INT32_MAX__ < _hitPoints + amount)
            _hitPoints = __INT32_MAX__;
        else
            _hitPoints += amount;

        _energyPoints--;
    }
}












