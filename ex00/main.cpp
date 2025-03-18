/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:33:24 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 15:21:33 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Cat* cat = new Cat();
	const Dog* dog = new Dog();

	const Cat* copycat = new Cat(*cat);
	const Dog* snoopdogg = dog;

	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongCat* wrongcat = new WrongCat();

	const WrongCat* copywrongcat = new WrongCat(*wrongcat);
	const WrongCat* assignationwrongcat = copywrongcat;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	copycat->makeSound();
	snoopdogg->makeSound();

	wrongcat->makeSound();
	wronganimal->makeSound();
	copywrongcat->makeSound();
	assignationwrongcat->makeSound();

	delete cat;
	delete dog;
	delete animal;
	delete copycat;
	delete wrongcat;
	delete wronganimal;
	delete copywrongcat;
}
