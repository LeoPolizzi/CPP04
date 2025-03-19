/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:32:52 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 16:02:42 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	if (!this->_brain)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		exit(1);
	}
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
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

void Cat::makeSound() const
{
	std::cout << "Cat meows" << std::endl;
}

void Cat::setIdea(size_t i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

void Cat::getIdeas() const
{
	for (size_t i = 0; i < 100; i++)
		std::cout << this->_brain->getIdea(i) << std::endl;
}
