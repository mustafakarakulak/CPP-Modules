/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarakul <mkarakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:27 by mkarakul          #+#    #+#             */
/*   Updated: 2023/09/05 16:27:51 by mkarakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span
{
	unsigned int _size;
	std::vector<int> _tab;

public:
	Span();
	Span(const Span &other);
	Span(unsigned int N);
	~Span();
	Span &operator=(const Span &other);
	void addNumber(int nb);
	int shortestSpan();
	int longestSpan();
};

#endif