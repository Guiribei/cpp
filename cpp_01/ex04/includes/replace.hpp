/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:29:21 by guribeir          #+#    #+#             */
/*   Updated: 2023/05/10 23:02:07 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

int			printError(std::string str);
std::string	*prepareArgv(char **argv, int argc);
std::string	replaceString(const std::string& line, const std::string from, const std::string to);

#endif