/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:31:49 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 11:32:40 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
  public:
	Cure();
	Cure(Cure const &src);

	virtual ~Cure();

	Cure &operator=(Cure const &src);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
