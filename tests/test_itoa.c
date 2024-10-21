/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:53:59 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 16:54:14 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"

void test_itoa() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Convert 0
    char *result1 = ft_itoa(0);
    print_test_result("Test 1 - Convert 0", 
        strcmp(result1, "0") == 0, 
        "Expected '0'", 
        &total_tests, &passed_tests);
    free(result1);  // Don't forget to free the allocated memory!

    // Test case 2: Convert a positive number (42)
    char *result2 = ft_itoa(42);
    print_test_result("Test 2 - Convert 42", 
        strcmp(result2, "42") == 0, 
        "Expected '42'", 
        &total_tests, &passed_tests);
    free(result2);

    // Test case 3: Convert a negative number (-42)
    char *result3 = ft_itoa(-42);
    print_test_result("Test 3 - Convert -42", 
        strcmp(result3, "-42") == 0, 
        "Expected '-42'", 
        &total_tests, &passed_tests);
    free(result3);

    // Test case 4: Convert INT_MAX
    char *result4 = ft_itoa(INT_MAX);
    print_test_result("Test 4 - Convert INT_MAX", 
        strcmp(result4, "2147483647") == 0, 
        "Expected '2147483647'", 
        &total_tests, &passed_tests);
    free(result4);

    // Test case 5: Convert INT_MIN
    char *result5 = ft_itoa(INT_MIN);
    print_test_result("Test 5 - Convert INT_MIN", 
        strcmp(result5, "-2147483648") == 0, 
        "Expected '-2147483648'", 
        &total_tests, &passed_tests);
    free(result5);

    // Test case 6: Convert a large negative number (-123456789)
    char *result6 = ft_itoa(-123456789);
    print_test_result("Test 6 - Convert -123456789", 
        strcmp(result6, "-123456789") == 0, 
        "Expected '-123456789'", 
        &total_tests, &passed_tests);
    free(result6);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
