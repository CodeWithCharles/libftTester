/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:39:00 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 16:41:26 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"  // Adjust the path to point to libftTester.h
#include <ctype.h>           // For the standard isascii function

void test_isascii() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Check a valid ASCII character (65 = 'A')
    char test_char1 = 65;
    print_test_result("Test 1 - Valid ASCII character 'A' (65)", 
        ft_isascii(test_char1) != 0, 
        "Expected same result as isascii for 'A'", 
        &total_tests, &passed_tests);

    // Test case 2: Check a non-ASCII character (200)
    char test_char2 = 200;
    print_test_result("Test 2 - Non-ASCII character (200)", 
        ft_isascii(test_char2) == 0, 
        "Expected same result as isascii for 200", 
        &total_tests, &passed_tests);

    // Test case 3: Check ASCII control character (0 = NUL)
    char test_char3 = 0;
    print_test_result("Test 3 - ASCII control character NUL (0)", 
        ft_isascii(test_char3) != 0, 
        "Expected same result as isascii for NUL (0)", 
        &total_tests, &passed_tests);

    // Test case 4: Check a boundary character (127 = DEL)
    char test_char4 = 127;
    print_test_result("Test 4 - ASCII boundary character DEL (127)", 
        ft_isascii(test_char4) != 0, 
        "Expected same result as isascii for DEL (127)", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
