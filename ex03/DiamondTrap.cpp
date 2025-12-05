#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap()
{std::cout << "Destructor called on DiamondTrap :" << _name << std::endl;}

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
    _name = "Default"; 
    _hitPoints = 100;
    _attackDamage = 30;
    _energyPoints = 50;
    std::cout << "Default Constructor called on DiamondTrap :Default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    _name = name;
    _hitPoints = 100;
    _attackDamage = 30;
    _energyPoints = 50;
    std::cout << "Paramerized Constructor called on DiamondTrap :" << name << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &other) :ClapTrap(other._name) , FragTrap(other._name), ScavTrap(other._name) 
{
    *this = other;
    std::cout << "Copy Constructor called on DiamondTrap :" << _name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _attackDamage = other._attackDamage; 
    _energyPoints = other._energyPoints;
    std::cout << "Copy assignment operator called on DiamondTrap :" << _name << std::endl;
    return *this;
}


void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}







