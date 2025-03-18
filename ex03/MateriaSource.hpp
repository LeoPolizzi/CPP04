/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:16:55 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 12:38:00 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *_materias[4];

  public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	MateriaSource &operator=(MateriaSource const &src);

	virtual ~MateriaSource();

	void learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const &type);
};

#endif
