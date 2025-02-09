from Solution import Solution
from timeout_decorator import timeout
import unittest

class UnitTest(unittest.TestCase):
    def setUp(self):
        self.__solution = Solution()
        self.__testcases = {
            'default_example_1': ([4,1,3,3], 5),
            'default_example_2': ([1,2,3,4,5], 0),
            'single_element_array': ([10], 0),
            'uniform_array': ([1,1,1], 3),
            'mixed_order_array': ([3,2,1,4], 5),
            'array_with_repeated_values': ([1,2,2,3], 4),
            'two_elements_uniform_array': ([1,1], 1),
            'evenly_spaced_arithmetic_sequence': ([2,4,6,8], 6),
            'descending_order_sequence': ([5,4,3,2,1], 10),
            'alternating_repeating_pattern': ([1,2,1,2,1,2], 12),
            'random_sorted_array': ([2,5,3,7,11,13], 14),
            'large_values_uniform': ([1000000000,1000000000,1000000000], 3),
            'mixed_duplicates_and_unique': ([3,3,4,2,2,5], 14),
            'peak_in_the_middle': ([1,2,3,2,1], 7)
        }
        return super().setUp()

    @timeout(0.5)
    def test_case_default_example_1(self):
        nums, expected = self.__testcases['default_example_1']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_default_example_2(self):
        nums, expected = self.__testcases['default_example_2']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_single_element_array(self):
        nums, expected = self.__testcases['single_element_array']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_uniform_array(self):
        nums, expected = self.__testcases['uniform_array']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_mixed_order_array(self):
        nums, expected = self.__testcases['mixed_order_array']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_array_with_repeated_values(self):
        nums, expected = self.__testcases['array_with_repeated_values']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_two_elements_uniform_array(self):
        nums, expected = self.__testcases['two_elements_uniform_array']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_evenly_spaced_arithmetic_sequence(self):
        nums, expected = self.__testcases['evenly_spaced_arithmetic_sequence']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_descending_order_sequence(self):
        nums, expected = self.__testcases['descending_order_sequence']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_alternating_repeating_pattern(self):
        nums, expected = self.__testcases['alternating_repeating_pattern']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_random_sorted_array(self):
        nums, expected = self.__testcases['random_sorted_array']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_large_values_uniform(self):
        nums, expected = self.__testcases['large_values_uniform']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_mixed_duplicates_and_unique(self):
        nums, expected = self.__testcases['mixed_duplicates_and_unique']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)
    @timeout(0.5)
    def test_case_peak_in_the_middle(self):
        nums, expected = self.__testcases['peak_in_the_middle']
        result = self.__solution.countBadPairs(nums)
        self.assertEqual(result, expected)

if __name__ == '__main__': unittest.main()