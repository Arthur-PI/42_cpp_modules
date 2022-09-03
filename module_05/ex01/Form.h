/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:13:32 by apigeon           #+#    #+#             */
/*   Updated: 2022/09/03 12:17:21 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.h"

class	Form
{
	public:
		// Constructor
		Form(void);
		Form(const Form& form);
		
		// Destructor
		~Form();

		// Operator
		Form&	operator=(const Form& form);

	private:

};

#endif
