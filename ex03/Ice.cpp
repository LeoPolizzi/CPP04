/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:33:11 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 11:33:55 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &src)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	std::cout << "Ice clone function called" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "Ice use function called" << std::endl;
	AMateria::use(target);
}
