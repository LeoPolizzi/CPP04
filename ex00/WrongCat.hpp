/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:15:41 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 15:18:25 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	WrongCat(WrongCat const &src);
	virtual ~WrongCat();

	WrongCat &operator=(WrongCat const &src);

	virtual void makeSound() const;
};

#endif
