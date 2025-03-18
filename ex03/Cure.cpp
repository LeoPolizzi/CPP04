/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:34:00 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 11:34:29 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &src)
{
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
}
