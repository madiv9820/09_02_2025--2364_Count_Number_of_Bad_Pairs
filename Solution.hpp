#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        // Total number of elements (our dance floor size)! 🕺💃
        long long n = nums.size();
        
        // Create a map to count the frequency of each (nums[i] - i) value.
        // Why? Because if two indices have the same (nums[i] - i),
        // they form a "good pair"—think of it as two dancers perfectly in sync!
        unordered_map<int, long long> freq_of_diff_of_nums_at_i_and_i;
        
        // Iterate over the array and tally up the frequencies.
        // Each (nums[i] - i) is like a signature dance move.
        for (int i = 0; i < n; ++i)
            ++freq_of_diff_of_nums_at_i_and_i[nums[i] - i];  // Count that perfect move! 💃✨
        
        // Calculate the total number of "good pairs".
        // For each unique dance move (key) that occurs 'freq' times,
        // the number of perfect duos is "freq choose 2" = (freq * (freq - 1)) / 2.
        long long no_of_good_pairs = 0;
        for (auto& [key, freq] : freq_of_diff_of_nums_at_i_and_i)
            no_of_good_pairs += (freq * (freq - 1)) / 2;
        
        // Total pairs possible on the dance floor (all possible duos).
        long long total_pairs = (n * (n - 1)) / 2;
        
        // The number of "bad pairs" (those awkward, out-of-sync duos)
        // is the total pairs minus the good pairs.
        return total_pairs - no_of_good_pairs; // Return the count of those clumsy pairs! 🤦‍♂️🚫
    }
};    