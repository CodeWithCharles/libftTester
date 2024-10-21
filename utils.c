/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:47:32 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 11:47:47 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftTester.h"

void print_test_result(const char *test_name, int condition, const char *error_message, int *total_tests, int *passed_tests) {
    (*total_tests)++;  // Increment total tests
    if (condition) {
        printf("%s: %sOK%s\n", test_name, COLOR_GREEN, COLOR_RESET);
        (*passed_tests)++;  // Increment passed tests
    } else {
        printf("%s: %sNOK%s\n", test_name, COLOR_RED, COLOR_RESET);
        if (error_message) {
            printf("  Error: %s\n", error_message);
        }
    }
}
