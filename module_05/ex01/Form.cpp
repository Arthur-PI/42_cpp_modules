/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:17:28 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/03 12:55:36 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.h"

Form::Form(void)
{

}

Form::Form(const Form& form)
{
	(void) form;
}

Form::~Form(void)
{

}

Form&	Form::operator=(const Form& form)
{
	(void)form;
	return *this;
}
