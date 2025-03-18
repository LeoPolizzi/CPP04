/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:13:05 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 12:38:06 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include <string>

class	AMateria;

class IMateriaSource
{
  public:
	virtual ~IMateriaSource(){}
	virtual void learnMateria(AMateria *materia) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
