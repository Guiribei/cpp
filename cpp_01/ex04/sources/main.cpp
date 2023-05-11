/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:28:59 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/10 23:11:59 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int argc, char **argv)
{
	std::string	*args;
	std::string	line;

	args = NULL;
	if (argc != 4)
		return (printError("Wrong number of arguments"));
	args = prepareArgv(argv, argc);
	if (!args)
		return (printError("Wrong entry"));
	std::ifstream inputFile(argv[1]);
	std::ofstream outputFile("temp.cpp");
	if (!inputFile.is_open() || !outputFile.is_open())
		return (printError("Failed file opening"));
	while (getline(inputFile, line))
		outputFile << replaceString(line, args[2], args[3]) << std::endl;
	inputFile.close();
	outputFile.close();
	if (remove(argv[1]) != 0)
		return (printError("Error deleting file"));
	if (rename("temp.cpp", argv[1]) != 0)
		return (printError("Error renaming file"));
	delete[] args;
	return (0);
}
