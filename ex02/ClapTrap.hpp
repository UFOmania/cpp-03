/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:18:26 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 13:18:26 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <climits>

class ClapTrap
{
    protected:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

    public:
        virtual ~ClapTrap();
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);
        virtual void attack(const std::string &target);
        void beRepaired(unsigned int amount);
        void takeDamage(unsigned int amount);
};


#endif