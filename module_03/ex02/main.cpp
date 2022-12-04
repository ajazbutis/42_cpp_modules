/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:16:51 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 15:20:08 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()	{
	{
		std::cout << "	#############" << std::endl;
		std::cout << "	##  Test I ##" << std::endl;
		std::cout << "	#############" << std::endl;
		FragTrap	test;
		FragTrap	Jon("Jon");
		FragTrap	Ben(Jon);

		Jon.highFiveGuys();
		std::cout << Jon << std::endl;
		for(int i = 0; i < 100; i++)
			Jon.attack("Tree");
		for(int i = 0; i < 100; i++)
			Ben.beRepaired(1);
		Jon.beRepaired(1);
		Ben.attack("Tree");
		std::cout << "Copy assignement from Jon" << std::endl;
		std::cout << "*****#########******" << std::endl;
		test = Jon;
		test.attack("Tree");
		test.beRepaired(1);
		test.takeDamage(100);
		test.takeDamage(10);
		test.highFiveGuys();
	}
	{
		std::cout << "	#############" << std::endl;
		std::cout << "	## Test II ##" << std::endl;
		std::cout << "	#############" << std::endl;

		ScavTrap	Ben("Ben");
		FragTrap	Jon("Jon");

		Jon.highFiveGuys();
		Ben.guardGate();
		for (int i = 0; i < 4; i++)	{
			Jon.attack("Ben");
			Ben.takeDamage(Jon.getAttackDamage());
			Ben.attack("Jon");
			Jon.takeDamage(Ben.getAttackDamage());
		}
		Jon.beRepaired(20);
		Ben.beRepaired(20);
		Jon.highFiveGuys();
		Ben.guardGate();
	}
	{
		std::cout << "	#############" << std::endl;
		std::cout << "	## Test III ##" << std::endl;
		std::cout << "	#############" << std::endl;

		ScavTrap	Ben("Ben");
		FragTrap	Jon("Jon");

		Jon.highFiveGuys();
		Ben.guardGate();
		std::cout << Jon << std::endl;
		std::cout << Ben << std::endl;
		for (int i = 0; i < 3; i++)	{
			Jon.attack("Ben");
			Ben.takeDamage(Jon.getAttackDamage());
			Ben.attack("Jon");
			Jon.takeDamage(Ben.getAttackDamage());
		}
		Jon.highFiveGuys();
		Ben.guardGate();
		for (int i = 0; i < 90; i++) {
			Jon.beRepaired(1);
			Ben.beRepaired(1);
		}
		std::cout << Jon << std::endl;
		std::cout << Ben << std::endl;
		Jon.highFiveGuys();
		Ben.guardGate();
		for (int i = 0; i < 7; i++) {
			Jon.attack("Ben");
			Ben.takeDamage(Jon.getAttackDamage());
			Ben.attack("Jon");
			Jon.takeDamage(Ben.getAttackDamage());
			Jon.beRepaired(20);
			Ben.beRepaired(20);
			Jon.highFiveGuys();
			Ben.guardGate();
		}
		std::cout << Jon << std::endl;
		std::cout << Ben << std::endl;
		Jon.takeDamage(200);
		Jon.highFiveGuys();
		Ben.takeDamage(200);
		Ben.guardGate();
		std::cout << Jon << std::endl;
		std::cout << Ben << std::endl;
	}
	return (0);
}
