/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:28:50 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 19:49:37 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    std::cout << "| FragTrap | - " << this->name << " constructed." << std::endl;
    std::cout << ClapTrap::attackDamage << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "| FragTrap | - " << this->name << " destructed." << std::endl;
}

void    FragTrap::highFive( void )
{
    if ( this->energyPoints <= 0 )
    {
        std::cout << "| FragTrap | - " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "| FragTrap | - " << this->name << " high fives everybody." << std::endl;
    this->energyPoints -= 1;
}