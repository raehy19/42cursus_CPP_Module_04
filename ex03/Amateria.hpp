/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:36:50 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/22 18:36:52 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria {
	protected:

	public:
		AMateria(std::string const &type);

		std::string const &getType() const; //Returns the materia type

		virtual AMateria *clone() const = 0;

		virtual void use(ICharacter &target);
};

#endif