/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:46:56 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 16:48:28 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"

void test_isprint() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Check a printable character 'A'
    char test_char1 = 'A';
    print_test_result("Test 1 - Printable character 'A'", 
        ft_isprint(test_char1) != 0, 
        "Expected same result as isprint for 'A'", 
        &total_tests, &passed_tests);

    // Test case 2: Check a space character ' '
    char test_char2 = ' ';
    print_test_result("Test 2 - Space character ' '", 
        ft_isprint(test_char2) != 0, 
        "Expected same result as isprint for space", 
        &total_tests, &passed_tests);

    // Test case 3: Check a non-printable character (ASCII 31)
    char test_char3 = 31;  // ASCII 31 is a non-printable character
    print_test_result("Test 3 - Non-printable character (ASCII 31)", 
        ft_isprint(test_char3) == 0, 
        "Expected same result as isprint for ASCII 31", 
        &total_tests, &passed_tests);

    // Test case 4: Check a printable symbol '#'
    char test_char4 = '#';
    print_test_result("Test 4 - Printable symbol '#'", 
        ft_isprint(test_char4) != 0, 
        "Expected same result as isprint for '#'", 
        &total_tests, &passed_tests);

    // Test case 5: Check a boundary character (ASCII 126, '~')
    char test_char5 = 126;  // '~' is the last printable ASCII character
    print_test_result("Test 5 - Printable boundary character '~'", 
        ft_isprint(test_char5) != 0, 
        "Expected same result as isprint for '~'", 
        &total_tests, &passed_tests);

    // Test case 6: Check a non-printable character (ASCII 127, DEL)
    char test_char6 = 127;  // ASCII 127 is non-printable (DEL)
    print_test_result("Test 6 - Non-printable character DEL (127)", 
        ft_isprint(test_char6) == 0, 
        "Expected same result as isprint for DEL (127)", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
