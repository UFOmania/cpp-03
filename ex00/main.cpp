/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <massrayb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:18:37 by massrayb          #+#    #+#             */
/*   Updated: 2025/12/18 13:18:37 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap cp("hmmadi");// = new ClapTrap("pris");

    cp.attack("__ONE__");
    cp.beRepaired(200);
    cp.takeDamage(15);
    for (int i = 0; i < 10; i++)
        cp.attack("__TWO__");
}