/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 11:41:33 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/01 12:46:35 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TACTICALMARINE_HPP_
# define _TACTICALMARINE_HPP_

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
  public:
    TacticalMarine();
    TacticalMarine( const TacticalMarine& other);
    TacticalMarine& operator=(const TacticalMarine* other);
    ~TacticalMarine();
    TacticalMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif