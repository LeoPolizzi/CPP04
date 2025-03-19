/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:45:36 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 16:12:44 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = src.getIdea(i);
	return (*this);
}

const std::string Brain::getIdea(size_t i) const
{
	if (i >= 100)
	{
		std::cout << "You can only store 100 ideas in the brain" << std::endl;
		return ("");
	}
	return (this->_ideas[i]);
}

const std::string *Brain::getIdeaAddress(size_t i) const
{
	if (i >= 100)
	{
		std::cout << "You can only store 100 ideas in the brain" << std::endl;
		return (NULL);
	}
	const std::string *stringREF = &this->_ideas[i];
	return (stringREF);
}

void Brain::setIdea(size_t i, std::string idea)
{
	if (i >= 100)
	{
		std::cout << "You can only store 100 ideas in the brain" << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
}
