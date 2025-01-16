/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 21:12:43 by omartela          #+#    #+#             */
/*   Updated: 2025/01/02 21:12:44 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    try 
    {
        Zombie *zombieHorde = new Zombie[N];
        for (int i = 0; i < N; i++)
        {
            new (zombieHorde+i) Zombie(name);
        }
        return (zombieHorde);
    }
    catch (const std::bad_alloc& e)
    {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
        return (nullptr);
    }
}