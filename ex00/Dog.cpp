/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:28:02 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 14:44:50 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog barks" << std::endl;
}
