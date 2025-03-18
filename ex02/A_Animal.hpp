/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:21:47 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 16:10:27 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class A_Animal
{
  protected:
	std::string _type;
	A_Animal();

  public:
	A_Animal(A_Animal const &src);
	virtual ~A_Animal();

	A_Animal &operator=(A_Animal const &src);

	std::string getType() const;

	virtual void makeSound() const = 0;
};

#endif
