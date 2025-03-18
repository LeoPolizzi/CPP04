/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:55:03 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 12:30:41 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Character.hpp"
# include "MateriaSource.hpp"
# include <iostream>
# include <string>

class	ICharacter;

class AMateria
{
  protected:
	std::string _type;

  public:
	AMateria(std::string const &type);

	virtual ~AMateria();

	std::string const &getType() const;

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
