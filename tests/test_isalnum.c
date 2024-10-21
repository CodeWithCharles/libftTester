/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:23:24 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 16:28:57 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"

void test_isalnum() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Check a numeric character
    char test_char1 = '5';
    print_test_result("Test 1 - Numeric character '5'", 
        ft_isalnum(test_char1) != 0, 
        "Expected same result as isalnum for '5'", 
        &total_tests, &passed_tests);

    // Test case 2: Check an uppercase alphabetic character
    char test_char2 = 'A';
    print_test_result("Test 2 - Alphabetic character 'A'", 
        ft_isalnum(test_char2) != 0, 
        "Expected same result as isalnum for 'A'", 
        &total_tests, &passed_tests);

    // Test case 3: Check a lowercase alphabetic character
    char test_char3 = 'z';
    print_test_result("Test 3 - Alphabetic character 'z'", 
        ft_isalnum(test_char3) != 0, 
        "Expected same result as isalnum for 'z'", 
        &total_tests, &passed_tests);

    // Test case 4: Check a non-alphanumeric character (space)
    char test_char4 = ' ';
    print_test_result("Test 4 - Non-alphanumeric character (space)", 
        ft_isalnum(test_char4) == 0, 
        "Expected same result as isalnum for space", 
        &total_tests, &passed_tests);

    // Test case 5: Check a non-alphanumeric symbol ('!')
    char test_char5 = '!';
    print_test_result("Test 5 - Non-alphanumeric symbol '!'", 
        ft_isalnum(test_char5) == 0, 
        "Expected same result as isalnum for '!'", 
        &total_tests, &passed_tests);

    // Test case 6: Check a digit (0)
    char test_char6 = '0';
    print_test_result("Test 6 - Digit '0'", 
        ft_isalnum(test_char6) != 0, 
        "Expected same result as isalnum for '0'", 
        &total_tests, &passed_tests);

    // Test case 7: Check a non-printable character (ASCII 7 - BEL)
    char test_char7 = '\a';  // BEL (ASCII 7)
    print_test_result("Test 7 - Non-printable character (BEL)", 
        ft_isalnum(test_char7) == 0, 
        "Expected same result as isalnum for BEL (ASCII 7)", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
