/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Dog.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:12:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef Dog_HPP
 #define Dog_HPP

#include <iostream>
#include "../headers/Class.Animal.hpp"

class Dog : public Animal
{
	private:
	public:
		/* constructors*/
		Dog(void);
		Dog(Dog const &src);
		virtual ~Dog();

		/* member functions */
		void	makeSound() const;

		/* getters and setters */

		/* operator assignment */
		Dog	&operator=(Dog const &rhs);
};




#endif
