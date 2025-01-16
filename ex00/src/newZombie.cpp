/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:10:05 by omartela          #+#    #+#             */
/*   Updated: 2025/01/02 20:10:06 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    try 
    {
        Zombie *newZombie = new Zombie(name);
        return (newZombie);
    } 
    catch (const std::bad_alloc& e)
    {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
        return nullptr;
    }
}