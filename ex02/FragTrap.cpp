#include "FragTrap.hpp"

FragTrap::~FragTrap()
{std::cout << "Destructor called on FragTrap :" << _name << std::endl;}

FragTrap::FragTrap() : ClapTrap("Default")
{
    _hitPoints = 100; 
    _attackDamage = 30; 
    _energyPoints = 100;
    std::cout << "Default Constructor called on FragTrap :Default" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100; 
    _attackDamage = 30; 
    _energyPoints = 100;
    std::cout << "Paramerized Constructor called on FragTrap :" << name << std::endl;
}


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other._name)
{
    *this = other;
    std::cout << "Copy Constructor called on FragTrap :" << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _attackDamage = other._attackDamage; 
    _energyPoints = other._energyPoints;
    std::cout << "Copy assignment operator called on FragTrap :" << _name << std::endl;
    return *this;
}


void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " request's a high-fives" << std::endl;
}










