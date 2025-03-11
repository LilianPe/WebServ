/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperthui <lperthui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:13:57 by lperthui          #+#    #+#             */
/*   Updated: 2025/03/11 17:18:57 by lperthui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}

Data::Data(std::string configFile) {
	this->parseData(configFile);
}

Data::~Data() {}

void	Data::parseData(std::string configFile) {
	
}
