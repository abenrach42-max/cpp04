/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 21:59:50 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/21 15:29:57 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{   // learn me
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    // creat me
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    // create cobaye and attack him and heal him
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << std::endl;
    // learn Aymene
    IMateriaSource *msrc = new MateriaSource();
    msrc->learnMateria(new Ice());
    msrc->learnMateria(new Cure());
    
    //create Aymene
    ICharacter *Aymene = new Character("Aymene");
    AMateria *tp;
    tp = msrc->createMateria("ice");
    Aymene->equip(tp);
    tp = msrc->createMateria("cure");
    Aymene->equip(tp);

    // attack bob and heal him
    Aymene->use(0, *bob);
    Aymene->use(0, *bob);
    Aymene->use(1, *bob);
    std::cout << std::endl;
    
    IMateriaSource *src_bot = new MateriaSource();
    src_bot->learnMateria(new Ice());
    ICharacter *bot = new Character("bot");
    AMateria *tmp_bot;
    tmp_bot = src_bot->createMateria("ice");
    if (tmp_bot)
        bot->equip(tmp_bot);
    bot->unequip(0);
    bot->use(0, *bob);
    // free all
    delete bot;
    delete src_bot;
    delete msrc;
    delete Aymene;
    delete bob;
    delete me;
    delete src;
    return 0;
}