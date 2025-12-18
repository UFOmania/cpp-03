/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:58:56 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 17:58:56 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ~ScavTrap();
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        void guardGate();
        void attack(const std::string &target);
};


#endif