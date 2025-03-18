/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:55:24 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 14:55:46 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
  protected:
	std::string _type;

  public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(WrongAnimal const &src);

	std::string getType() const;

	virtual void makeSound() const;
};

#endif
