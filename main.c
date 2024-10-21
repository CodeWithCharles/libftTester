/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:48:58 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 16:47:28 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftTester.h"

int main() {
    printf("Running mandatory tests...\n\n");

    test_atoi();
	sleep(1);
	test_bzero();
	sleep(1);
	test_calloc();
	sleep(1);
	test_isalnum();
	sleep(1);
	test_isalpha();
	sleep(1);
	test_isascii();
	sleep(1);
	test_isdigit();
	sleep(1);
	test_isprint();
	sleep(1);

	return 0;
}

