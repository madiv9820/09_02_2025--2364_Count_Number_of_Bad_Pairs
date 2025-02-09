from typing import List

class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        # Initialize our counter for "bad pairs" – these pairs are like dance partners who just can't keep the beat! 🎭💃
        no_of_bad_pairs = 0
        
        # Count the number of dancers (elements) on our dance floor.
        n = len(nums)
        
        # Loop through each dancer to choose the first partner.
        for i in range(n - 1):
            # For every chosen dancer 'i', pick a second dancer 'j' who comes later.
            for j in range(i + 1, n):
                # Check if these two have mismatched moves:
                # The difference in their positions (j - i) should match the difference in their moves (nums[j] - nums[i]).
                # If not, they form a "bad pair" – a duo that can't groove together! 🚫🕺
                if j - i != nums[j] - nums[i]:
                    no_of_bad_pairs += 1
        
        # Return the total count of bad pairs – essentially, the number of pairs that missed the rhythm!
        return no_of_bad_pairs