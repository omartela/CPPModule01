/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:58:00 by omartela          #+#    #+#             */
/*   Updated: 2025/01/07 12:58:03 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl = Harl();

    if (argc == 2)
    {
        char c = argv[1][0];
        switch (c) 
        {
            case 'D':
                std::cout << "[ DEBUG ]" << std::endl;
                harl.complain("DEBUG");
                std::cout << "\n";
            case 'I':
                std::cout << "[ INFO ]" << std::endl;
                harl.complain("INFO");
                std::cout << "\n";
            case 'W':
                std::cout << "[ WARNING ]" << std::endl;
                harl.complain("WARNING");
                std::cout << "\n";
            case 'E':
                std::cout << "[ ERROR ]" << std::endl;
                harl.complain("ERROR");
                std::cout << "\n";
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        }
    }
}