/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iseletsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 13:57:40 by iseletsk          #+#    #+#             */
/*   Updated: 2018/07/12 14:00:18 by iseletsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.cpp"
#include <iostream>
template<typename T>
void	gogo(T el)
{
	std::cout << "a vot 40 delaet eta hicha: " << el << std::endl;
}

int		main(void)
{
	int arr[] = {12, 4, 10, 5};
	char str[] = "alakaaaaaaaaasdfwq";

	::iter<int>(arr, 4, &(gogo<int>));
	::iter<char>(str, strlen(str), &(gogo<char>));
	return (0);
}
