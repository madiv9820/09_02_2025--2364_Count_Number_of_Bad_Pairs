#include <vector>
using namespace std;

class Solution {
    public:
        int countBadPairs(vector<int>& nums) {
            // Initialize our "bad pair" counter. We’re about to catch some misbehaving pairs! 😈🚫
            int no_of_bad_pairs = 0;
            // Get the number of elements in our array – the dance floor size! 💃🕺
            int n = nums.size();
    
            // Loop through each element to set the first dancer (i) in the pair.
            for (int i = 0; i < n - 1; ++i)
                // Now, pick the second dancer (j) for our pair – they must be to the right of i.
                for (int j = i + 1; j < n; ++j)
                    // Check if this duo is out of sync:
                    // If the difference in their positions (j - i) doesn't match the difference in their moves (nums[j] - nums[i]),
                    // we’ve got ourselves a bad pair! 💥👯‍♂️
                    if (j - i != nums[j] - nums[i])
                        // Increment our counter because we found a pair that's not dancing in harmony.
                        ++no_of_bad_pairs;
            
            // Return the total count of bad pairs – the number of pairs that just can’t keep the beat!
            return no_of_bad_pairs;
        }
    };
    