/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:34:25 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 16:37:49 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"  // Adjust the path to point to libftTester.h

void test_isalpha() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Check an uppercase alphabetic character
    char test_char1 = 'A';
    print_test_result("Test 1 - Uppercase alphabetic character 'A'", 
        ft_isalpha(test_char1) != 0, 
        "Expected same result as isalpha for 'A'", 
        &total_tests, &passed_tests);

    // Test case 2: Check a lowercase alphabetic character
    char test_char2 = 'z';
    print_test_result("Test 2 - Lowercase alphabetic character 'z'", 
        ft_isalpha(test_char2) != 0, 
        "Expected same result as isalpha for 'z'", 
        &total_tests, &passed_tests);

    // Test case 3: Check a numeric character
    char test_char3 = '5';
    print_test_result("Test 3 - Numeric character '5'", 
        ft_isalpha(test_char3) == 0, 
        "Expected same result as isalpha for '5'", 
        &total_tests, &passed_tests);

    // Test case 4: Check a non-alphabetic symbol ('!')
    char test_char4 = '!';
    print_test_result("Test 4 - Non-alphabetic symbol '!'", 
		ft_isalpha(test_char4) == 0,
        "Expected same result as isalpha for '!'", 
        &total_tests, &passed_tests);

    // Test case 5: Check a non-printable character (ASCII 7 - BEL)
    char test_char5 = '\a';  // BEL (ASCII 7)
    print_test_result("Test 5 - Non-printable character (BEL)", 
        ft_isalpha(test_char5) == 0, 
        "Expected same result as isalpha for BEL (ASCII 7)", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
