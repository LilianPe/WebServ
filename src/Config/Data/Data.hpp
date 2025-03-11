/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperthui <lperthui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:10:32 by lperthui          #+#    #+#             */
/*   Updated: 2025/03/11 17:18:17 by lperthui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <vector>
# include <string>
# include "Server.hpp"

class Data {

	private :
		std::vector<Server>	_routes;
		std::string			_serverName;
		Server				_defaultServer;
	
	public :
		Data();
		Data(std::string configFile);
		~Data();
		
		//methods

		void	parseData(std::string configFile);
	
};

#endif