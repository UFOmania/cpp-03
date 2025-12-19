/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:59:04 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 17:59:04 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap()
{std::cout << "Destructor called on DiamondTrap :" << _name << std::endl;}

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
    _name = "Default"; 
    _hitPoints = FragTrap::_hitPoints;
    _attackDamage = FragTrap::_attackDamage;
    _energyPoints = ScavTrap::_energyPoints;
    std::cout << "Default Constructor called on DiamondTrap :Default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _attackDamage = FragTrap::_attackDamage;
    _energyPoints = ScavTrap::_energyPoints;
    std::cout << "Paramerized Constructor called on DiamondTrap :" << name << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),FragTrap(other), ScavTrap(other) 
{
    std::cout << "Copy Constructor called on DiamondTrap :" << other._name << std::endl;
	_name = other._name;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "Copy assignment operator called on DiamondTrap :" << other._name << std::endl;
    if (this == &other)
        return *this;
    _name = other._name;
    return *this;
}


void DiamondTrap::whoAmI()
{
    std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}







