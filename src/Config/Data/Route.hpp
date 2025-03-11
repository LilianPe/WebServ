/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Route.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperthui <lperthui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:45:34 by lperthui          #+#    #+#             */
/*   Updated: 2025/03/11 17:15:07 by lperthui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROUTES_HPP
# define ROUTES_HPP
# include <map>
# include <vector>
# include <string>
# include "File.hpp"

class Route {

	private :
		std::map<std::string, File>		_files;
		std::map<int, File>				_errorFiles;
		std::vector<std::string>		_methods;
		std::vector<std::string>		_acceptedExtensions;
		File							_defaultFile;
		std::string						_path;
		std::string						_root;
		std::string						_redirection;
		bool							_directoryListening;
	
	public :
		Route();
		~Route();
		
};

#endif