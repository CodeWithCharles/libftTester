/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:41:40 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 12:11:30 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"

void test_atoi() {
	int passed_tests = 0;
	int total_tests = 0;

	printf("Running %s:\n", __func__);
    // Test case 1: Basic positive number
	print_test_result("Test 1 - Basic positive number", atoi("123") == 123, "Expected 123", &passed_tests, &total_tests);

    // Test case 2: Basic negative number
	print_test_result("Test 2 - Basic negative number", atoi("-123") == -123, "Expected -123", &passed_tests, &total_tests);

    // Test case 3: String with leading whitespaces
	print_test_result("Test 3 - Leading whitespaces", atoi("   456") == 456, "Expected 456", &passed_tests, &total_tests);

    // Test case 4: String with trailing characters
	print_test_result("Test 4 - Trailing characters", atoi("789abc") == 789, "Expected 789", &passed_tests, &total_tests);

    // Test case 5: Empty string
	print_test_result("Test 5 - Empty string", atoi("") == 0, "Expected 0", &passed_tests, &total_tests);

    // Test case 6: String with only whitespaces
	print_test_result("Test 6 - Only whitespaces", atoi("   ") == 0, "Expected 0", &passed_tests, &total_tests);

    // Test case 7: String with non-numeric starting characters
	print_test_result("Test 7 - Non-numeric starting characters", atoi("abc123") == 0, "Expected 0", &passed_tests, &total_tests);

    // Test case 8: Zero value
	print_test_result("Test 8 - Zero value", atoi("0") == 0, "Expected 0", &passed_tests, &total_tests);

    // Test case 9: Negative zero
	print_test_result("Test 9 - Negative zero", atoi("-0") == 0, "Expected 0", &passed_tests, &total_tests);

    // Test case 10: Very large number
	print_test_result("Test 10 - Large number", atoi("2147483647") == 2147483647, "Expected 2147483647", &passed_tests, &total_tests);

    // Test case 11: Very small (negative) number
	print_test_result("Test 11 - Small negative number", atoi("-2147483648") == -2147483648, "Expected -2147483648", &passed_tests, &total_tests);

	printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
	sleep(1);
}
