/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 14:19:32 by omartela          #+#    #+#             */
/*   Updated: 2025/01/03 14:19:33 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *pointer;
    pointer = &brain;
    std::string &ref = brain;

    std::cout << "Memory address of string variable " << &brain << std::endl;
    std::cout << "Memory address of string pointer " << &pointer << std::endl;
    std::cout << "Memory address of string reference " << &ref << std::endl;

    std::cout << "Value of string variable " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR " << *pointer << std::endl;
    std::cout << "The value pointed to by stringREF " << ref << std::endl; 
}