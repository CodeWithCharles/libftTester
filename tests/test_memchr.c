/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:04:55 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 17:05:10 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"

void test_memchr() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    char arr[] = "Hello, World!";

    // Test case 1: Find character 'o' in "Hello, World!" (should find the first 'o')
    void *result1 = ft_memchr(arr, 'o', strlen(arr));
    print_test_result("Test 1 - Find 'o' in 'Hello, World!'", 
        result1 == memchr(arr, 'o', strlen(arr)), 
        "Expected to find 'o' at the same location", 
        &total_tests, &passed_tests);

    // Test case 2: Find character 'W' in "Hello, World!"
    void *result2 = ft_memchr(arr, 'W', strlen(arr));
    print_test_result("Test 2 - Find 'W' in 'Hello, World!'", 
        result2 == memchr(arr, 'W', strlen(arr)), 
        "Expected to find 'W' at the same location", 
        &total_tests, &passed_tests);

    // Test case 3: Find character 'z' in "Hello, World!" (not present)
    void *result3 = ft_memchr(arr, 'z', strlen(arr));
    print_test_result("Test 3 - Find 'z' (not present) in 'Hello, World!'", 
        result3 == memchr(arr, 'z', strlen(arr)), 
        "Expected NULL since 'z' is not present", 
        &total_tests, &passed_tests);

    // Test case 4: Search within a limited number of bytes (find 'l' in first 5 bytes)
    void *result4 = ft_memchr(arr, 'l', 5);
    print_test_result("Test 4 - Find 'l' in the first 5 bytes of 'Hello, World!'", 
        result4 == memchr(arr, 'l', 5), 
        "Expected to find 'l' at the same location", 
        &total_tests, &passed_tests);

    // Test case 5: Find the null-terminating character '\0'
    void *result5 = ft_memchr(arr, '\0', strlen(arr) + 1);  // +1 to include the null-terminator
    print_test_result("Test 5 - Find null-terminator in 'Hello, World!'", 
        result5 == memchr(arr, '\0', strlen(arr) + 1), 
        "Expected to find the null-terminator", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
