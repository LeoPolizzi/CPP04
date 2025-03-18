/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:20:22 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 12:45:59 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Character named " << this->_name << " created" << std::endl;
	for (int i = 0; i < INVENTORY_CAPACITY; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	std::cout << "Character copy constructor called" << std::endl;
	_name = src._name;
	for (int i = 0; i < INVENTORY_CAPACITY; i++)
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < INVENTORY_CAPACITY; i++)
		if (_inventory[i])
			delete	_inventory[i];
}

Character &Character::operator=(Character const &src)
{
	if (this != &src)
	{
		_name = src._name;
		for (int i = 0; i < INVENTORY_CAPACITY; i++)
		{
			if (_inventory[i])
				delete	_inventory[i];
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *materia)
{
	for (int i = 0; i < INVENTORY_CAPACITY; i++)
	{
		if (!_inventory[i])
		{
			this->_inventory[i] = materia;
			std::cout << "Materia " << materia->getType() << " equipped at slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int index)
{
	if (index >= 0 && index < INVENTORY_CAPACITY && this->_inventory[index])
	{
		this->_inventory[index] = NULL;
		std::cout << "Materia unequipped from slot " << index << std::endl;
		return ;
	}
	std::cout << "Cannot unequip materia at slot " << index << "for " << this->_name << std::endl;
}

void Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < INVENTORY_CAPACITY && this->_inventory[index])
		this->_inventory[index]->use(target);
	else
		std::cout << "Cannot use materia at slot " << index << " for character: " << this->_name << std::endl;
}
