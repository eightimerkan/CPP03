/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:01:48 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 18:37:45 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "Constructor working" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor working" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),hitPoints(10),energyPoints(10),attackDamage(0)
            {
                std::cout << "New ClapTrap created" << std::endl;
            }

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
    std::cout << "Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& a)
{
    this->name = a.name;
    this->hitPoints = a.hitPoints;
    this->energyPoints = a.energyPoints;
    this->attackDamage = a.attackDamage;
    return *this;
}

void    ClapTrap::attack(std::string const& target)
{
        if (energyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (hitPoints <= amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
    hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (energyPoints <= amount)
    {
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
    energyPoints -= 1;
    hitPoints += amount;
}
