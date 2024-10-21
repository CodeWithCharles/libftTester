/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:45:08 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 12:46:04 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"

void test_bzero() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Zeroing a buffer of size 5
    char buffer1[5] = {'a', 'b', 'c', 'd', 'e'};
    ft_bzero(buffer1, 5);
    print_test_result("Test 1 - Zero 5 bytes", 
        memcmp(buffer1, "\0\0\0\0\0", 5) == 0, 
        "Expected 5 zero bytes", 
        &total_tests, &passed_tests);

    // Test case 2: Zeroing a buffer of size 0 (no change)
    char buffer2[5] = {'a', 'b', 'c', 'd', 'e'};
    ft_bzero(buffer2, 0);
    print_test_result("Test 2 - Zero 0 bytes (no change)", 
        memcmp(buffer2, "abcde", 5) == 0, 
        "Expected no change", 
        &total_tests, &passed_tests);

    // Test case 3: Zeroing only first 3 bytes of a buffer
    char buffer3[5] = {'a', 'b', 'c', 'd', 'e'};
    ft_bzero(buffer3, 3);
    print_test_result("Test 3 - Zero first 3 bytes", 
        memcmp(buffer3, "\0\0\0de", 5) == 0, 
        "Expected 3 zero bytes followed by 'd' and 'e'", 
        &total_tests, &passed_tests);

    // Test case 4: Empty buffer (size 0)
    char buffer4[1] = { 'x' };  // Just a dummy buffer
    ft_bzero(buffer4, 0);
    print_test_result("Test 4 - Empty buffer", 
        buffer4[0] == 'x', 
        "Expected no change for 0 size buffer", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
