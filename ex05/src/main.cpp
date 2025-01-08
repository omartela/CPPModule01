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
    harl.complain("");
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    if (argc == 2)
    {
        std::string input = argv[1];
        std::cout << "User input " << argv[1] << std::endl;
        std::cout << "Complain: " << std::endl;
        harl.complain(argv[1]);
    }
}