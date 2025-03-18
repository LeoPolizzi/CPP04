/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:32:47 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 11:33:07 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
  public:
	Ice();
	Ice(Ice const &src);

	virtual ~Ice();

	Ice &operator=(Ice const &src);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
