/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:28:02 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 16:04:42 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		exit(1);
	}
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &src)
	{
		_type = src._type;
		this->_brain = new Brain();
		if (!this->_brain)
		{
			std::cerr << "Memory allocation failed" << std::endl;
			exit(1);
		}
		for (size_t i = 0; i < 100; i++)
			this->_brain->setIdea(i, src._brain->getIdea(i));
		*this->_brain = *src._brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog barks" << std::endl;
}

void Dog::setIdea(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

void Dog::getIdeas() const
{
	for (size_t i = 0; i < 100; i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
}
