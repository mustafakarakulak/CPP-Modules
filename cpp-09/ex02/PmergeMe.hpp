/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafakarakulak <mustafakarakulak@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:40:23 by mustafakara       #+#    #+#             */
/*   Updated: 2023/09/13 15:40:23 by mustafakara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <deque>
template <typename T>
void displayNum(T num)
{
	for (typename T::iterator it = num.begin(); it != num.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename T>
void merge(T &data, int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;
	T tmp(5);
	while (i <= mid && j <= right)
	{
		if (data[i] <= data[j])
		{
			tmp[k] = data[i];
			k++;
			i++;
		}
		else
		{
			tmp[k] = data[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		tmp[k] = data[i];
		i++;
		k++;
	}
	while (j <= right)
	{
		tmp[k] = data[j];
		k++;
		j++;
	}
	for (int p = left; p <= right; p++)
		data[p] = tmp[p];
}

template <typename T>
void mergeInsertSort(T &data, int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		mergeInsertSort(data, left, mid);
		mergeInsertSort(data, mid + 1, right);
		merge(data, left, mid, right);
	}
}

template <typename T, typename T2>
void sortNum(T num, T2 num2)
{
	std::cout << "Before: ";
	displayNum(num);
	clock_t start = clock();
	mergeInsertSort(num, 0, num.size() - 1);
	clock_t end = clock();
	std::cout << "After: ";
	displayNum(num);

	double time = double(end - start) / double(CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of " << num.size()
			  << " elements with std::vector: " << time << " us" << std::endl;

	start = clock();
	mergeInsertSort(num2, 0, num2.size() - 1);
	end = clock();
	time = double(end - start) / double(CLOCKS_PER_SEC) * 1000000;
	std::cout << "Time to process a range of " << num2.size()
			  << " elements with std::list: " << time << " us" << std::endl;
}
#endif