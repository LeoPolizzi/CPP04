/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:17:25 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 12:33:32 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Using Amateria on " << target.getName() << std::endl;
}
