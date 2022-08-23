/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:00:09 by apigeon           #+#    #+#             */
/*   Updated: 2022/08/23 17:02:10 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int	main(void)
{
	Harl harl;

	harl.complain("info");
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("debug");
	harl.complain("debug");
	harl.complain("error");
	harl.complain("error");
	harl.complain("error");
	harl.complain("warning");
	harl.complain("warning");
	harl.complain("warning");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("info");
	harl.complain("info");
	return 0;
}
