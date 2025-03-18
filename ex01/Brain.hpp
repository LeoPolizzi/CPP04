/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:36:21 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/17 16:12:57 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
  private:
	std::string _ideas[100];

  public:
	Brain();
	Brain(const Brain &src);
	virtual ~Brain();

	Brain &operator=(const Brain &src);

	const std::string getIdea(size_t i) const;
	const std::string *getIdeaAddress(size_t i) const;
	void setIdea(size_t i, std::string idea);
};

#endif
