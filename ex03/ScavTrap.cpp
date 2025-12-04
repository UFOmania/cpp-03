#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{std::cout << "Destructor called on ScavTrap :" << _name << std::endl;}

ScavTrap::ScavTrap() : ClapTrap("Default")
{ 
    _hitPoints = 100; 
    _attackDamage = 20; 
    _energyPoints = 50;
    std::cout << "Default Constructor called on ScavTrap :Default" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100; 
    _attackDamage = 20; 
    _energyPoints = 50;
    std::cout << "Paramerized Constructor called on ScavTrap :" << name << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other._name)
{
    *this = other;
    std::cout << "Copy Constructor called on ScavTrap :" << _name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _attackDamage = other._attackDamage; 
    _energyPoints = other._energyPoints;
    std::cout << "Copy assignment operator called on ScavTrap :" << _name << std::endl;
    return *this;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now on Gate guard mode" << std::endl;
}










