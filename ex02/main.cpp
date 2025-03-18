/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:33:24 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 16:17:09 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Cat *cat = new Cat();
	Dog *dog = new Dog();

	cat->makeSound();
	dog->makeSound();
	for (size_t i = 0; i < 100; i++)
	{
		cat->setIdea(i, "I'm a cat");
		dog->setIdea(i, "I'm a dog");
	}
	const Cat *cat2 = cat;
	const Dog *dog2 = dog;
	cat2->getIdeas();
	dog2->getIdeas();
	delete cat;
	delete dog;
}
