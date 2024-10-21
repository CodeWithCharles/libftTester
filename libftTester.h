/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftTester.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:38:52 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 13:03:13 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTTESTER_H
# define LIBFTTESTER_H

# include "../libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# define COLOR_GREEN	"\033[1;32m"
# define COLOR_RED		"\033[1;31m"
# define COLOR_RESET	"\033[0m"

void	print_test_result(const char *test_name, int condition, const char *error_message, int *total_tests, int *passed_tests);

// Tests 

void	test_atoi();
void	test_bzero();

#endif
