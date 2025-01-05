/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:05:16 by omartela          #+#    #+#             */
/*   Updated: 2025/01/04 11:05:18 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <filesystem>

std::string string_replace(std::string& line, std::string& s1, std::string& s2)
{
    std::string newstring;
    size_t  found;
    size_t  pfound;

    found = 0;
    pfound = 0;
    while ((found = line.find(s1, pfound)) != std::string::npos)
    {
        newstring.append(line, pfound, found - pfound);
        newstring.append(s2);
        pfound = found + s1.size();
    }
    newstring.append(line, pfound, line.size() - pfound);
    return (newstring);
}

int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::string infilename;
    std::string outfilename;
    std::filesystem::path file_path;
    std::ifstream file1;
    std::ofstream file2;
    std::string line;
    std::string rstring;

    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments, argc != 4" << std::endl;
        return (1);
    }
    if (s1.empty()) 
    {
        std::cerr << "Error: String s1 cannot be empty." << std::endl;
        return (1);
    }
    s1 = argv[2];
    s2 = argv[3];
    infilename = argv[1];
    file1.open(infilename);
    if (file1.is_open())
    {
        file_path = infilename;
        outfilename = file_path.stem();
        std::filesystem::rename(outfilename, outfilename + ".replace");
        file2.open(outfilename);
    }
    else
    {
        std::cerr << "File could not be opened" << std::endl;
        return (1);
    }
    if (file2.is_open())
    {
        while (std::getline(file1, line))
        {
            rstring = string_replace(line, s1, s2);
            file2 << rstring << '\n';
        }
    }
    else
    {
        std::cerr << "File could not be created" << std::endl;
        return (1);
    }
    file1.close();
    file2.close();
    return (0);
}