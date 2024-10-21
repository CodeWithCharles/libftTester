/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftTester.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:38:52 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 17:14:07 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTTESTER_H
# define LIBFTTESTER_H

# include "../libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>

# define COLOR_GREEN	"\033[1;32m"
# define COLOR_RED		"\033[1;31m"
# define COLOR_RESET	"\033[0m"

void	print_test_result(const char *test_name, int condition, const char *error_message, int *total_tests, int *passed_tests);

// Tests 

void	test_atoi();
void	test_bzero();
void	test_calloc();
void	test_isalnum();
void	test_isalpha();
void	test_isascii();
void	test_isdigit();
void	test_isprint();
void	test_itoa();
void	test_memchr();
void	test_memcmp();
void	test_memcpy();
void	test_memmove();
#endif
