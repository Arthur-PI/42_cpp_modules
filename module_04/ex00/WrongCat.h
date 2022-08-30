/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:57:20 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 10:36:13 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

# include <iostream>
# include "WrongAnimal.h"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);

		void	makeSound(void) const;
};

#endif
