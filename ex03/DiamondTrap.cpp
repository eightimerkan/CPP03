/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:39:25 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 19:43:55 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name ), FragTrap( name ), ScavTrap( name )
{
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    
    FragTrap::hitPoints = 100;
    ScavTrap::energyPoints = 50;
    FragTrap::attackDamage = 30;
    
    std::cout << "# DiamondTrap # - " << this->name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "# DiamondTrap # - " << this->name << " is dead." << std::endl;
}

void    DiamondTrap::whoAmI( void )
{
    std::cout << "I am a DiamondTrap named " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}