/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:29:48 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 17:18:14 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		int Hit_Points;
		unsigned int Max_Hit_Points;
		int Energy_Points;
		unsigned int Max_Energy_points;
		const static int Level = 1;
		std::string Name;
		const static int Melee_attack_damage;
		const static int Ranged_attack_damage;
		unsigned int Armor_damage_reduction;
		
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		std::string   takeName();
		void          giveName(std::string name);
		void          takeDamage(unsigned int amount);
		void          beRepaired(unsigned int amount);
		void          changeEnergy(unsigned int num);
		int           energyPoints();
		void	        changeHit(unsigned int num);
		int           hitPoints();
		void          changeArmorReduction(int num);
		int           Max_Energy();
		void					changeMax(unsigned int num);
		int           Max_Hit();
		void					changeMaxHit(unsigned int num);
};

#endif