/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:53:45 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 12:23:08 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.h"
# include "Brain.h"

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog(void);
		Dog&	operator=(const Dog& dog);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;

	private:
		Brain*	_brain;
};

#endif
