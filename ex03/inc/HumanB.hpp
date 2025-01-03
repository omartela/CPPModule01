/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:53:11 by omartela          #+#    #+#             */
/*   Updated: 2025/01/03 14:53:12 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(const std::string& newName);
        void    attack();
        void    setWeapon(Weapon& newWeapon);
};