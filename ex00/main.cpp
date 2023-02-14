/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:40:26 by shammouc          #+#    #+#             */
/*   Updated: 2023/02/02 20:40:28 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    std::cout << meta->get_type() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std :: cout << "#################################" << std :: endl;
    const WrongAnimal* meta_w = new WrongAnimal();
    const WrongAnimal* j_w = new WrongCat();
    const WrongAnimal* i_w = new WrongCat();
    std::cout << j_w->get_type() << " " << std::endl;
    std::cout << i_w->get_type() << " " << std::endl;
    std::cout << meta_w->get_type() << " " << std::endl;
    i_w->makeSound(); //will output the cat sound!
    j_w->makeSound();
    meta_w->makeSound();

    delete meta_w;
    delete j_w;
    delete i_w;

    return (0);
}
