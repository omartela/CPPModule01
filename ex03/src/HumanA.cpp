/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:51:15 by omartela          #+#    #+#             */
/*   Updated: 2025/01/03 14:51:17 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& newName, Weapon& newWeapon) : name(newName), weapon(newWeapon) {}
void    HumanA::attack()
{
    std::cout << name << " attacks with their weapon " << weapon.getType() << std::endl;
}