/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:28:33 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 16:23:16 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"

class Cat : public A_Animal
{
  private:
	Brain *_brain;

  public:
	Cat();
	Cat(Cat const &src);
	virtual ~Cat();

	Cat &operator=(Cat const &src);

	virtual void makeSound() const;
	void setIdea(size_t i, std::string idea);
	void getIdeas() const;
};

#endif
