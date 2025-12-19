/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:18:34 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 13:18:34 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called on ClapTrap " << _name << std::endl;
}

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
    std::cout << "Copy Constructor called on ClapTrap :" << other._name << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called on ClapTrap :" << other._name << std::endl;
    if (this == &other)
        return *this;
    _name = other._name;
    _hitPoints = other._hitPoints; 
    _attackDamage = other._attackDamage; 
    _energyPoints = other._energyPoints;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (!_energyPoints)
	{
        std::cout << "ClapTrap " << _name << " can't attack because have no Energy Points\n";
		return;
	}
    if (!_hitPoints)
	{
        std::cout << "ClapTrap " << _name << " can't attack because is already dead\n";
		return;
	}

	std::cout << "ClapTrap "<< _name << " attacks " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " can't take damage because is already dead\n";
		return;
	}
    
	if (amount >= (unsigned int)_hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap "<< _name << " took " << amount << " of damage, how have " << _hitPoints << " of hp"<< std::endl;
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!_energyPoints)
	{
		std::cout << "ClapTrap " << _name << " can't be repaired because have no Energy Points\n";
		return ;
	}
    if (!_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " can't be repaired because is already dead\n";
		return ;
	}

	if ((unsigned int)_hitPoints > INT_MAX - amount)
		_hitPoints = INT_MAX;
	else
		_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap "<< _name << " took " << amount << " of repared, how have " << _hitPoints << " of hp"<< std::endl;
}












