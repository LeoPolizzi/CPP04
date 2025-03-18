/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:24:36 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 14:26:26 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

A_Animal::A_Animal(A_Animal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

A_Animal::~A_Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

A_Animal &A_Animal::operator=(A_Animal const &src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return *this;
}

std::string A_Animal::getType() const
{
	return _type;
}

void A_Animal::makeSound() const
{
	std::cout << "Animal makes a random sound" << std::endl;
}
