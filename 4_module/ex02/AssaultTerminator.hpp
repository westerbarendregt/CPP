/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 16:56:30 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/01 17:53:42 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ASSAULTTERMINATOR_HPP_
# define _ASSAULTTERMINATOR_HPP_


# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
  public:
    AssaultTerminator();
    AssaultTerminator( const AssaultTerminator& other);
    AssaultTerminator& operator=(const AssaultTerminator* other);
    ~AssaultTerminator();
    virtual ISpaceMarine* clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;
};

#endif