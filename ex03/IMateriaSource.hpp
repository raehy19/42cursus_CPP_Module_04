/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:11:29 by rjeong            #+#    #+#             */
/*   Updated: 2024/02/23 05:11:31 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef IMATERIASOURCE_HPP

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}

		virtual void learnMateria(AMateria *) = 0;

		virtual AMateria *createMateria(std::string const &type) = 0;
};

# define IMATERIASOURCE_HPP

