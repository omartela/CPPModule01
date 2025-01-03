/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:51:28 by omartela          #+#    #+#             */
/*   Updated: 2025/01/03 14:51:29 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& newName) : name(newName) {}
void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their weapon " << weapon->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon& newWeapon)
{
    weapon = &newWeapon;
}