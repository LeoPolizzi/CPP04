/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:26:13 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/18 13:51:17 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "package.hpp"

int main()
{
	std::cout << "\n" GREEN "===== Creating Materia Source =====" RESET "\n" << std::endl;
	IMateriaSource* src = new MateriaSource();

	std::cout << "\n" GREEN "===== Learning Materias =====" RESET "\n" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	std::cout << "\n" GREEN "===== Creating Characters =====" RESET "\n" << std::endl;
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << "\n" GREEN "===== Equipping Materias =====" RESET "\n" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n" YELLOW "===== Trying to Equip More than Allowed =====" RESET "\n" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "\n" BLUE "===== Using Materias =====" RESET "\n" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	std::cout << "\n" YELLOW "===== Unequipping and Re-equipping =====" RESET "\n" << std::endl;
	me->unequip(1);
	delete tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(1, *bob);

	std::cout << "\n" GREEN "===== Testing Copy Constructor =====" RESET "\n" << std::endl;
	Character* copy = new Character(*(dynamic_cast<Character*>(me)));
	copy->use(0, *bob);
	copy->use(1, *bob);
	delete copy;

	std::cout << "\n" GREEN "===== Testing Assignment Operator =====" RESET "\n" << std::endl;
	Character* test = new Character("test");
	*test = *(dynamic_cast<Character*>(me));
	test->use(0, *bob);
	test->use(1, *bob);
	delete test;

	std::cout << "\n" RED "===== Cleaning Up Memory =====" RESET "\n" << std::endl;
	delete bob;
	delete me;
	delete src;

	std::cout << "\n" GREEN "===== Tests Completed Successfully! =====" RESET "\n" << std::endl;
	return 0;
}
