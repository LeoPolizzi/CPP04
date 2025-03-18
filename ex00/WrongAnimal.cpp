/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:14:26 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 15:15:34 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called. WrongAnimal of type " << _type << " created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a random wrong sound" << std::endl;
}
