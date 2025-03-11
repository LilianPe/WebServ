/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperthui <lperthui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:38:56 by lperthui          #+#    #+#             */
/*   Updated: 2025/03/11 17:10:07 by lperthui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File() {}

File::File(std::string name, std::string absolutePath, std::string extension) : _name(name), _absolutePath(absolutePath), _extension(extension) {}

File::~File() {}
