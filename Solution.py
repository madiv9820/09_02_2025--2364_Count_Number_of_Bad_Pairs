from typing import List
from collections import defaultdict

class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        # Determine the number of dancers (elements) on the dance floor
        n = len(nums)
        
        # Create a defaultdict to count the frequency of each unique "dance move"
        # Here, each dance move is represented by (nums[i] - i)
        # Think of it as tallying each dancer's signature style! 💃🕺
        freq_of_diff_of_nums_at_i_and_i = defaultdict(int)
        
        # Loop through every dancer and record their signature move
        for i in range(n):
            freq_of_diff_of_nums_at_i_and_i[nums[i] - i] += 1
        
        # Count the number of "good pairs" (perfect dance duos)
        # If a move occurs 'freq' times, the number of flawless duos is: freq choose 2
        no_of_good_pairs = 0
        for freq in freq_of_diff_of_nums_at_i_and_i.values():
            no_of_good_pairs += (freq * (freq - 1)) // 2
        
        # Total pairs possible on the dance floor (all potential duos)
        total_pairs = n * (n - 1) // 2
        
        # Return the number of "bad pairs": those awkward duos that just can't keep the beat! 🚫👯‍♀️
        return total_pairs - no_of_good_pairs