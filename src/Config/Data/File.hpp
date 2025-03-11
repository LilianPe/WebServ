/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperthui <lperthui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:39:16 by lperthui          #+#    #+#             */
/*   Updated: 2025/03/11 17:10:00 by lperthui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP
# include <string>

class File
{
	private:
		std::string _name;
		std::string _absolutePath;
		std::string _extension;
		
	public:
		File();
		File(std::string name, std::string absolutePath, std::string extension);
		~File();
};

#endif
