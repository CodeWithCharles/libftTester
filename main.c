/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:48:58 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 17:19:45 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftTester.h"

int main() {
    printf("Running mandatory tests...\n\n");

    test_atoi();
	test_bzero();
	test_calloc();
	test_isalnum();
	test_isalpha();
	test_isascii();
	test_isdigit();
	test_isprint();
	test_itoa();
	test_memchr();
	test_memcmp();
	test_memcpy();
	test_memmove();

	return 0;
}

