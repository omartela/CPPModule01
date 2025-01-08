/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:58:45 by omartela          #+#    #+#             */
/*   Updated: 2025/01/07 12:58:46 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void (Harl::*Harl::functions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

std::string Harl::levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

Harl::Harl() {}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month. " << std::endl;
}
void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++) 
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}
	defcase();
}

void Harl::defcase()
{
	info();
}