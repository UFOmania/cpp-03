/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:55:53 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 17:55:53 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "Copy Constructor called on FragTrap :" << other._name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "Copy assignment operator called on FragTrap :" << other._name << std::endl;
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    return *this;
}


void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _name << " requests a high-fives" << std::endl;
}










