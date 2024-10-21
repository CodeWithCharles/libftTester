/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:19:53 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 16:21:29 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftTester.h"

void test_calloc() {
    int total_tests = 0;
    int passed_tests = 0;

    printf("Running %s:\n", __func__);

    // Test case 1: Allocate 5 integers and check if all are zero-initialized
    int *arr1 = (int *)ft_calloc(5, sizeof(int));
    print_test_result("Test 1 - Allocate 5 ints", 
        arr1 != NULL && memcmp(arr1, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 5 * sizeof(int)) == 0, 
        "Expected 5 zero-initialized ints", 
        &total_tests, &passed_tests);
    free(arr1);  // Free allocated memory

    // Test case 2: Allocate 10 chars and check if all are zero-initialized
    char *arr2 = (char *)ft_calloc(10, sizeof(char));
    print_test_result("Test 2 - Allocate 10 chars", 
        arr2 != NULL && memcmp(arr2, "\0\0\0\0\0\0\0\0\0\0", 10 * sizeof(char)) == 0, 
        "Expected 10 zero-initialized chars", 
        &total_tests, &passed_tests);
    free(arr2);

    // Test case 3: Allocate 0 bytes (should return NULL or a valid pointer without allocating any memory)
    void *arr3 = ft_calloc(0, sizeof(int));
    print_test_result("Test 3 - Allocate 0 bytes", 
        arr3 != NULL,  // Some implementations return NULL, others a valid pointer; it's fine as long as no memory is actually allocated
        "Expected a valid pointer or NULL for zero allocation", 
        &total_tests, &passed_tests);
    free(arr3);

    // Test case 4: Allocate with huge size (this depends on your system; should fail if too large)
    size_t huge_size = (size_t)-1;  // Try allocating a huge amount of memory
    void *arr4 = ft_calloc(huge_size, 1);
    print_test_result("Test 4 - Allocate huge size", 
        arr4 == NULL,  // Should return NULL for a failed allocation
        "Expected NULL for huge allocation", 
        &total_tests, &passed_tests);

    printf("\n%s passed %d/%d tests.\n", __func__, passed_tests, total_tests);
}
