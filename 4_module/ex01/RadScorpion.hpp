/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:43:35 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 16:59:58 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RADSCORPION_HPP_
# define _RADSCORPION_HPP_

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public virtual Enemy{
  public:
  	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion& other);
	RadScorpion& 	operator=(const RadScorpion& other);
};

#endif