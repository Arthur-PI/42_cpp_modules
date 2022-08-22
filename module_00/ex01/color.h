/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:26:27 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/22 14:04:17 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

// Regular text
# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN 	"\e[0;36m"
# define WHITE	"\e[0;37m"

// Bold text
# define BLACK_B	"\e[1;30m"
# define RED_B		"\e[1;31m"
# define GREEN_B	"\e[1;32m"
# define YELLOW_B	"\e[1;33m"
# define BLUE_B		"\e[1;34m"
# define PURPLE_B	"\e[1;35m"
# define CYAN_B		"\e[1;36m"
# define WHITE_B	"\e[1;37m"

//Reset
#define RESET	"\e[0m"

#endif
