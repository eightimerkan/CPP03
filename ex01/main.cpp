/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:01:52 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/30 14:27:06 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap katarina( "erkan" );
    ScavTrap garen( katarina );

    katarina.attack( "Knife" );
    garen.takeDamage( 10 );
    katarina.beRepaired( 10 );
    katarina.guardGate();

    return 0;
}