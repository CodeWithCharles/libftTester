/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:43:27 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 16:44:45 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"  // Adjust the path to point to libftTester.h
#include <ctype.h>           // For the standard isdigit function

void test_isdigit() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Check a digit character '0'
    char test_char1 = '0';
    print_test_result("Test 1 - Digit character '0'", 
        ft_isdigit(test_char1) != 0, 
        "Expected same result as isdigit for '0'", 
        &total_tests, &passed_tests);

    // Test case 2: Check a digit character '9'
    char test_char2 = '9';
    print_test_result("Test 2 - Digit character '9'", 
        ft_isdigit(test_char2) != 0, 
        "Expected same result as isdigit for '9'", 
        &total_tests, &passed_tests);

    // Test case 3: Check a non-digit character 'a'
    char test_char3 = 'a';
    print_test_result("Test 3 - Non-digit character 'a'", 
        ft_isdigit(test_char3) == 0, 
        "Expected same result as isdigit for 'a'", 
        &total_tests, &passed_tests);

    // Test case 4: Check a non-digit character '!'
    char test_char4 = '!';
    print_test_result("Test 4 - Non-digit character '!'", 
        ft_isdigit(test_char4) == 0, 
        "Expected same result as isdigit for '!'", 
        &total_tests, &passed_tests);

    // Test case 5: Check a numeric character (not a digit) '5' as int
    int test_char5 = 5;
    print_test_result("Test 5 - Numeric character (not a digit) 5", 
        ft_isdigit(test_char5) == 0, 
        "Expected same result as isdigit for int 5", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
