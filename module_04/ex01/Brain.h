/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:05:57 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/30 12:20:27 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

# define MAX_IDEAS 100

class	Brain
{
	public:
		Brain(void);
		Brain(const Brain& brain);
		~Brain(void);
		Brain&	operator=(const Brain& brain);

		std::string	getIdea(int i) const;

	private:
		std::string	_ideas[100];
};

#endif
