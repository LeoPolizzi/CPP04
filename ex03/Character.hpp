/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:55:36 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 12:35:39 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <string>

# define INVENTORY_CAPACITY 4

class Character : public ICharacter
{
  private:
	std::string _name;
	AMateria *_inventory[INVENTORY_CAPACITY];

  public:
	Character(std::string const &name);
	Character(Character const &src);

	Character &operator=(Character const &src);

	virtual ~Character();

	std::string const &getName() const;

	void equip(AMateria *materia);
	void unequip(int index);
	void use(int index, ICharacter &target);
};

#endif
