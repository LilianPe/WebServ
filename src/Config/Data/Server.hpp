/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperthui <lperthui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:01:14 by lperthui          #+#    #+#             */
/*   Updated: 2025/03/11 17:07:50 by lperthui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP
# define SERVER_HPP
# include <string>
# include <vector>
# include "Route.hpp"

class Server {
	private :
		std::vector<Route>	_routes;
		std::string			_serverName;
		unsigned int		_clientMaxBody;
	
	public :
		Server();
		~Server();
	
};

#endif