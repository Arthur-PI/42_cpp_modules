/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:58:36 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 20:27:36 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.h"

class	Character: public ICharacter
{
	public:
		Character(void);
		Character(const Character& character);
		~Character(void);
		Character&	operator=(const Character& character);

		Character(std::string name);

		void				equip(AMateria* m);
		void				unequip(int idx);
		void 				use(int idx, ICharacter& target);
		const std::string&	getName() const;


	private:
		std::string	_name;
		AMateria	*inventory[4];
};

#endif
