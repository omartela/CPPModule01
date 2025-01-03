/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:51:01 by omartela          #+#    #+#             */
/*   Updated: 2025/01/03 14:51:02 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string& newType) : type(newType) {}
const   std::string& Weapon::getType()
{
    return (type);   
}
void    Weapon::setType(const std::string& newType)
{
    type = newType;
}