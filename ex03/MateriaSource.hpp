/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 20:04:58 by abenrach          #+#    #+#             */
/*   Updated: 2026/09/20 21:27:03 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include <string>
# include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_inv[4];
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &src);
        MateriaSource   &operator=(const MateriaSource &src);
        ~MateriaSource(void);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const &type);
};

#endif