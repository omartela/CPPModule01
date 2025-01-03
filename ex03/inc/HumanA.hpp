/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:52:42 by omartela          #+#    #+#             */
/*   Updated: 2025/01/03 14:52:43 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanA(const std::string& newName, Weapon& newWeapon);
        void    attack();
};
