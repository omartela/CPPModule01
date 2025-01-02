/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:10:35 by omartela          #+#    #+#             */
/*   Updated: 2025/01/02 20:10:36 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.h"

int main()
{
    Zombie *zombie1 = newZombie("allocatedzombie");
    zombie1->announce();
    delete(zombie1);
    randomChump("Zombie2notallocated");
    return (0);
}