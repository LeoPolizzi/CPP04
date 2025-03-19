/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:25:38 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 13:51:16 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < INVENTORY_CAPACITY; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < INVENTORY_CAPACITY; i++)
		if (this->_materias[i])
			delete this->_materias[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < INVENTORY_CAPACITY; i++)
		{
			if (this->_materias[i])
			{
				delete this->_materias[i];
				this->_materias[i] = NULL;
			}
			if (src._materias[i])
				this->_materias[i] = src._materias[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < INVENTORY_CAPACITY; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = materia;
			return ;
		}
	}
	delete materia;
	std::cout << "Inventory is full" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < INVENTORY_CAPACITY; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	std::cout << "Materia not found" << std::endl;
	return (NULL);
}
