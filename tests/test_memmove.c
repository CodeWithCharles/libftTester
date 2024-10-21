/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:14:44 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 17:23:19 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"  // Adjust the path to point to libftTester.h

void test_memmove() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Normal move of a string
    char src1[] = "Hello, World!";
    char dest1[20];
    ft_memmove(dest1, src1, strlen(src1) + 1);  // +1 to include the null terminator
    print_test_result("Test 1 - Normal string move", 
        strcmp(dest1, src1) == 0, 
        "Expected copied string to be the same as source", 
        &total_tests, &passed_tests);

    // Test case 2: Overlapping move, src before dest
    char overlap1[] = "Hello, World!";
    ft_memmove(overlap1 + 7, overlap1, 6);  // Move "Hello," into " World!"
    print_test_result("Test 2 - Overlapping move (src before dest)", 
        strcmp(overlap1, "Hello, Hello,") == 0, 
        "Expected result after overlapping move", 
        &total_tests, &passed_tests);

    // Test case 3: Overlapping move, dest before src
    char overlap2[] = "Hello, World!";
    ft_memmove(overlap2, overlap2 + 7, 6);  // Move " World!" to the front
    print_test_result("Test 3 - Overlapping move (dest before src)", 
        strcmp(overlap2, "World! World!") == 0, 
        "Expected result after overlapping move", 
        &total_tests, &passed_tests);
    // Test case 4: Moving from a string with embedded null
    char src5[] = "Hello\0World!";
    char dest5[20];
    ft_memmove(dest5, src5, 10);  // Copying 10 bytes
    print_test_result("Test 4 - Moving with embedded null", 
        strcmp(dest5, "Hello") == 0, 
        "Expected to copy up to the first null", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
