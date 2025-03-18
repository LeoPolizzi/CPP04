/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:26:32 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 15:36:14 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
  public:
	Dog();
	Dog(Dog const &src);
	virtual ~Dog();

	Dog &operator=(Dog const &src);

	virtual void makeSound() const;
};

#endif
