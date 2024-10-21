/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:06:56 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 17:07:06 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"  // Adjust the path to point to libftTester.h

void test_memcmp() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Compare two identical strings
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    print_test_result("Test 1 - Identical strings", 
        ft_memcmp(str1, str2, strlen(str1)) == memcmp(str1, str2, strlen(str1)), 
        "Expected both memcmp and ft_memcmp to return 0", 
        &total_tests, &passed_tests);

    // Test case 2: Compare two different strings (difference in middle)
    char str3[] = "Hello, World!";
    char str4[] = "Hello, Worxd!";
    print_test_result("Test 2 - Difference in middle of strings", 
        ft_memcmp(str3, str4, strlen(str3)) == memcmp(str3, str4, strlen(str3)), 
        "Expected different values for 'x' and 'l'", 
        &total_tests, &passed_tests);

    // Test case 3: Compare strings with one empty string
    char str5[] = "";
    char str6[] = "Hello";
    print_test_result("Test 3 - Compare empty string with non-empty string", 
        ft_memcmp(str5, str6, 5) == memcmp(str5, str6, 5), 
        "Expected negative result as empty string is smaller", 
        &total_tests, &passed_tests);

    // Test case 4: Compare two strings, but only for the first n bytes
    char str7[] = "Hello, World!";
    char str8[] = "Hello, World?";
    print_test_result("Test 4 - Compare first 7 bytes", 
        ft_memcmp(str7, str8, 7) == memcmp(str7, str8, 7), 
        "Expected same result, since the first 7 characters are identical", 
        &total_tests, &passed_tests);

    // Test case 5: Compare with different lengths (n < strlen)
    char str9[] = "abcd";
    char str10[] = "abce";
    print_test_result("Test 5 - Compare first 3 bytes", 
        ft_memcmp(str9, str10, 3) == memcmp(str9, str10, 3), 
        "Expected 0, since the first 3 characters are identical", 
        &total_tests, &passed_tests);

    // Test case 6: Compare two completely different strings
    char str11[] = "foo";
    char str12[] = "bar";
    print_test_result("Test 6 - Compare completely different strings", 
        ft_memcmp(str11, str12, 3) == memcmp(str11, str12, 3), 
        "Expected difference due to 'f' and 'b'", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
