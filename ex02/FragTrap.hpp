/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:55:56 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 17:55:56 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        ~FragTrap();
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        void highFivesGuys(void);
};


#endif