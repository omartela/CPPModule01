/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:11:18 by omartela          #+#    #+#             */
/*   Updated: 2025/01/02 20:11:20 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define ZOMBIE_H
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

