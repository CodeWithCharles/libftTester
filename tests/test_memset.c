/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:28:58 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 17:33:34 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"  // Adjust the path to point to libftTester.h

void test_memset() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Normal memset
    char str1[20] = "Hello, World!";
    ft_memset(str1, 'X', 5);  // Fill first 5 bytes with 'X'
    print_test_result("Test 1 - Normal memset", 
        strcmp(str1, "XXXXX, World!") == 0, 
        "Expected result after memset", 
        &total_tests, &passed_tests);

    // Test case 2: Filling with zero
    char str2[20] = "Hello, World!";
    ft_memset(str2, 0, 5);  // Fill first 5 bytes with '\0'
    print_test_result("Test 2 - Filling with zero", 
        str2[0] == 0 && str2[1] == 0 && str2[2] == 0 && str2[3] == 0 && str2[4] == 0, 
        "Expected first 5 bytes to be zero", 
        &total_tests, &passed_tests);

    // Test case 3: Setting all bytes
    char str3[20] = "Hello, World!";
    ft_memset(str3, 'A', 20);  // Fill entire string with 'A'
    print_test_result("Test 3 - Setting all bytes", 
        strcmp(str3, "AAAAAAAAAAAAAAAAAAAArld! World!") == 0, 
        "Expected entire string to be filled with 'A'", 
        &total_tests, &passed_tests);
    // Test case 4: Setting more bytes than allocated
    char str4[20] = "Hello, World!";
    ft_memset(str4, 'Z', 20);  // Fill more than allocated (only first 20 bytes should change)
    print_test_result("Test 4 - Setting more bytes than allocated", 
        strcmp(str4, "ZZZZZZZZZZZZZZZZZZZZ Worxd!") == 0, 
        "Expected first 20 bytes to be filled with 'Z'", 
        &total_tests, &passed_tests);
    // Test case 5: Setting zero bytes
    char str5[20] = "Hello, World!";
    ft_memset(str5, 'X', 0);  // Fill zero bytes
    print_test_result("Test 5 - Setting zero bytes", 
        strcmp(str5, "Hello, World!") == 0, 
        "Expected string to remain unchanged", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
