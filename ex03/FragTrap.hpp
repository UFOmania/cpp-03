/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:59:24 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 17:59:24 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
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