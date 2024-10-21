/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:12:57 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 17:26:16 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"  // Adjust the path to point to libftTester.h

void test_memcpy() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Normal copy of a string
    char src1[] = "Hello, World!";
    char dest1[20];
    ft_memcpy(dest1, src1, strlen(src1) + 1);  // +1 to include the null terminator
    print_test_result("Test 1 - Normal string copy", 
        strcmp(dest1, src1) == 0, 
        "Expected copied string to be the same as source", 
        &total_tests, &passed_tests);

    // Test case 2: Copy with overlap (using the same destination)
    char src2[] = "Hello, World!";
    ft_memcpy(src2 + 7, src2, 5);  // Overlapping copy: "World!" becomes "Hello"
    print_test_result("Test 2 - Overlapping copy", 
        strcmp(src2, "Hello, Hello!") == 0, 
        "Expected to see overlapping copy result", 
        &total_tests, &passed_tests);

    // Test case 3: Copying a small number of bytes
    char src3[] = "abcdef";
    char dest3[10];
    ft_memcpy(dest3, src3, 3);
    dest3[3] = '\0';  // Null-terminate for safe string handling
    print_test_result("Test 3 - Copy first 3 bytes", 
        strcmp(dest3, "abc") == 0, 
        "Expected to copy first 3 bytes correctly", 
        &total_tests, &passed_tests);
    // Test case 4: Copying zero bytes
    char src4[] = "Unchanged!";
    char dest4[20];
    ft_memcpy(dest4, src4, 0);
    print_test_result("Test 4 - Copy zero bytes", 
        strcmp(dest4, src4) != 0, 
        "Expected destination to remain unchanged", 
        &total_tests, &passed_tests);

    // Test case 5: Copying from a string with embedded null
    char src5[] = "Hello\0World!";
    char dest5[20];
    ft_memcpy(dest5, src5, 10);  // Copying 10 bytes
    print_test_result("Test 5 - Copying with embedded null", 
        strcmp(dest5, "Hello") == 0, 
        "Expected to copy up to the first null", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
