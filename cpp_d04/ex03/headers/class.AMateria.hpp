/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.AMateria.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:57:47 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/25 18:59:40 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "class.ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const &type);
		virtual	~AMateria();

		/* Getters and setters */
		std::string const	&getType() const;

		/* Member functions */
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

		/* Operator assignment */
		AMateria	&operator=(AMateria const &src);
};
