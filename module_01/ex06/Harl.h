/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:46:07 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 17:43:35 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define RESET	"\e[0m"

class Harl
{
	public:
		void	complain(std::string level);

	private:
		typedef void (Harl::*funcPTR)(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
