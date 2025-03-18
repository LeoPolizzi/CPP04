/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:26:32 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 16:07:55 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"

class Dog : public A_Animal
{
  private:
	Brain *_brain;

  public:
	Dog();
	Dog(Dog const &src);
	virtual ~Dog();

	Dog &operator=(Dog const &src);

	virtual void makeSound() const;
	void setIdea(size_t i, std::string idea);
	void getIdeas() const;
};

#endif
