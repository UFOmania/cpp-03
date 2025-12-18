/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:58:53 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 17:58:53 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    std::cout << "Copy assignment operator called on ScavTrap :" << _name << std::endl;
    if (this == &other)
        return;
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _attackDamage = other._attackDamage; 
    _energyPoints = other._energyPoints;
    return *this;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now on Gate guard mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (!_energyPoints)
        std::cout << "ScavTrap " << _name << " can't attack because have no Energy Points\n";
    if (!_hitPoints)
        std::cout << "ScavTrap " << _name << " can't attack because is already dead\n";
    if (_hitPoints && _energyPoints)
    {
        std::cout << "ScavTrap "<< _name << " attacks " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
}










