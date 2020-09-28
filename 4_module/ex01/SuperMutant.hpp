/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:26:49 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:27:05 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPERMUTANT_HPP_
# define _SUPERMUTANT_HPP_

# include "Enemy.hpp"

class SuperMutant : public virtual Enemy{
  public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant& other);
	SuperMutant& 	operator=(const SuperMutant& other);
    void            takeDamage(int damage);
};

#endif
