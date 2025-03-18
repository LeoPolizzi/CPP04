/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:21:47 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 14:24:25 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
  protected:
	std::string _type;

  public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &src);
	virtual ~Animal();

	Animal &operator=(Animal const &src);

	std::string getType() const;

	virtual void makeSound() const;
};

#endif
