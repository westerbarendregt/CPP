/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 13:29:55 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 14:00:35 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "Ice.hpp"
# include "AMateria.hpp"
# include "Cure.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria* _materia[4];
  public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    ~MateriaSource();

    void            learnMateria(AMateria* materia);
    AMateria*       createMateria(std::string const& type);
};

#endif