/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:18:27 by jede-ara          #+#    #+#             */
/*   Updated: 2023/12/11 17:13:17 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include "PhoneBook.hpp"

class Contact{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	secret;
		std::string	number;
	public:
		std::string	get_fields(int n);
		void	print();
		Contact(void);
		Contact(std::string fn, std::string ln, std::string nk, std::string nb, std::string ds);
};

bool validation_digits(std::string number);

#endif
