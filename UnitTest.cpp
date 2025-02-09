#include <iostream>
#include <string>
#include <unordered_map>
#include "Solution.hpp"

class UnitTest {
private:
    unordered_map<string, pair<vector<int>, int>> testcases;
    Solution solution;
    void test_case_default_example_1() {
        vector<int>& nums = testcases["default_example_1"].first;
        int expected = testcases["default_example_1"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_default_example_1: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_default_example_2() {
        vector<int>& nums = testcases["default_example_2"].first;
        int expected = testcases["default_example_2"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_default_example_2: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_single_element_array() {
        vector<int>& nums = testcases["single_element_array"].first;
        int expected = testcases["single_element_array"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_single_element_array: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_uniform_array() {
        vector<int>& nums = testcases["uniform_array"].first;
        int expected = testcases["uniform_array"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_uniform_array: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_mixed_order_array() {
        vector<int>& nums = testcases["mixed_order_array"].first;
        int expected = testcases["mixed_order_array"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_mixed_order_array: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_array_with_repeated_values() {
        vector<int>& nums = testcases["array_with_repeated_values"].first;
        int expected = testcases["array_with_repeated_values"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_array_with_repeated_values: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_two_elements_uniform_array() {
        vector<int>& nums = testcases["two_elements_uniform_array"].first;
        int expected = testcases["two_elements_uniform_array"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_two_elements_uniform_array: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_evenly_spaced_arithmetic_sequence() {
        vector<int>& nums = testcases["evenly_spaced_arithmetic_sequence"].first;
        int expected = testcases["evenly_spaced_arithmetic_sequence"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_evenly_spaced_arithmetic_sequence: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_descending_order_sequence() {
        vector<int>& nums = testcases["descending_order_sequence"].first;
        int expected = testcases["descending_order_sequence"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_descending_order_sequence: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_alternating_repeating_pattern() {
        vector<int>& nums = testcases["alternating_repeating_pattern"].first;
        int expected = testcases["alternating_repeating_pattern"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_alternating_repeating_pattern: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_random_sorted_array() {
        vector<int>& nums = testcases["random_sorted_array"].first;
        int expected = testcases["random_sorted_array"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_random_sorted_array: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_large_values_uniform() {
        vector<int>& nums = testcases["large_values_uniform"].first;
        int expected = testcases["large_values_uniform"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_large_values_uniform: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_mixed_duplicates_and_unique() {
        vector<int>& nums = testcases["mixed_duplicates_and_unique"].first;
        int expected = testcases["mixed_duplicates_and_unique"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_mixed_duplicates_and_unique: " << ((result == expected) ? "passed":"failed") << endl;
    }
    void test_case_peak_in_the_middle() {
        vector<int>& nums = testcases["peak_in_the_middle"].first;
        int expected = testcases["peak_in_the_middle"].second;
        int result = solution.countBadPairs(nums);

        cout << "test_case_peak_in_the_middle: " << ((result == expected) ? "passed":"failed") << endl;
    }
public:
    UnitTest() {
        testcases = {
            {"default_example_1", {{4,1,3,3}, 5}},
            {"default_example_2", {{1,2,3,4,5}, 0}},
            {"single_element_array", {{10}, 0}},
            {"uniform_array", {{1,1,1}, 3}},
            {"mixed_order_array", {{3,2,1,4}, 5}},
            {"array_with_repeated_values", {{1,2,2,3}, 4}},
            {"two_elements_uniform_array", {{1,1}, 1}},
            {"evenly_spaced_arithmetic_sequence", {{2,4,6,8}, 6}},
            {"descending_order_sequence", {{5,4,3,2,1}, 10}},
            {"alternating_repeating_pattern", {{1,2,1,2,1,2}, 12}},
            {"random_sorted_array", {{2,5,3,7,11,13}, 14}},
            {"large_values_uniform", {{1000000000,1000000000,1000000000}, 3}},
            {"mixed_duplicates_and_unique", {{3,3,4,2,2,5}, 14}},
            {"peak_in_the_middle", {{1,2,3,2,1}, 7}}
        };
    }
    void test() {
        test_case_default_example_1();
        test_case_default_example_2();
        test_case_single_element_array();
        test_case_uniform_array();
        test_case_mixed_order_array();
        test_case_array_with_repeated_values();
        test_case_two_elements_uniform_array();
        test_case_evenly_spaced_arithmetic_sequence();
        test_case_descending_order_sequence();
        test_case_alternating_repeating_pattern();
        test_case_random_sorted_array();
        test_case_large_values_uniform();
        test_case_mixed_duplicates_and_unique();
        test_case_peak_in_the_middle();
    }
};

int main() {
    UnitTest test;
    test.test();
}