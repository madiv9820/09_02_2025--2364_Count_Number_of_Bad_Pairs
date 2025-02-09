# Count the Number of Bad Pairs: From Brute Force Blunders to HashMap Heroics! 🚀🕺💻

Welcome to my GitHub repository for the [**Count the Number of Bad Pairs**](https://github.com/madiv9820/09_02_2025--2364_Count_Number_of_Bad_Pairs) problem! Here, you'll find full code implementations in both C++ and Python, along with an extensive suite of unit tests that ensure every pair—good or bad—is properly counted. 

### What’s Inside?

- **Full Code:**  
  Explore two distinct approaches:
  - **Brute Force:** For those who like to keep it raw and unfiltered, testing every possible pair like a chaotic dance-off. 💥
  - **HashMap Approach:** For the connoisseurs of elegance, grouping similar moves to count synchronized (good) pairs and then deducing the awkward (bad) ones. 🗺️✨

- **Unit Test Cases:**  
  A collection of test cases that cover the spectrum from basic to bizarre. Whether it’s a single-element solo or a full-blown array dance party, we’ve got you covered. 🎉

- **Intuition & Analysis:**  
  Detailed explanations of our thought process, approach, and complexities—served with a generous side of humor, wit, and a few dance references because why not? 😉

    ### Why This Repo?

    Ever felt like indices and values are at a constant dance-off, never quite getting in sync? This repository is your one-stop destination to unravel the mystery behind counting those pesky "bad pairs" that refuse to keep time. Whether you’re here for the learning or just to enjoy a good algorithmic jam session, you’re in the right place!

    So, clone the repo, strap on your virtual dancing shoes, and join the party. Let’s count those bad pairs together and prove that even algorithms can have a sense of humor! 🎉💃🕺

    Happy coding, and may all your pairs dance in perfect harmony (or at least be counted correctly)! 😎🚀


### Approach 1:- Brute Force
- ### Intuition 💡
    Imagine hosting a grand dance party where every pair of dancers is expected to groove in perfect synchrony. In our problem, a "bad pair" is like two dancers whose steps (i.e., the difference in their positions) don't match their moves (i.e., the difference in their numbers). If the steps don't sync up, it's a case of awkward dancing! 💃🕺😅

- ### Approach 🔍
    - **Brute Force Double-Loop**:  
        We go through every possible pair of dancers (i.e., every pair of indices `(i, j)` with `i < j`) using nested loops.  
        - For each pair, we check:
            - Does the difference in their positions (`j - i`) equal the difference in their values (`nums[j] - nums[i]`)?  
            - If not, we mark them as a "bad pair" (like a pair stepping on each other's toes) and increment our counter.
        - This approach is straightforward and clear—much like watching a full dance-off where every misstep is counted!

- ### Time Complexity ⏱️
    - **$O(n^2)$**:  
        Since we check every possible pair, our algorithm's running time grows quadratically with the number of dancers (array elements).  
        Think of it as having to evaluate every possible dance duo at a party—if the party gets huge, the number of potential awkward pairings skyrockets! 🚀

- ### Space Complexity 📦
    - **$O(1)$**:  
        We only use a few extra variables to keep track of our counter and loop indices.  
        No extra memory is needed—just your bare feet on the dance floor, ready to boogie! 👣

- ### Code Implementation 💻
    - **Python Solution 🐍✨**

        ```python3 []
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
        ```
    - **C++ Solution: 🅲➕➕**
        ```cpp []
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
        ```

### Approach 2:- Hashmaps
- ### Intuition 💡
    Imagine a dance floor where every dancer has a signature move. In our problem, a "good pair" is like two dancers whose moves sync perfectly—the difference between their positions matches the difference between their values. By rephrasing this as comparing `nums[i] - i` values, we group dancers with identical moves. Any pair that doesn't fall into these synchronized groups is an awkward "bad pair." Who wants to dance out of sync? 💃🕺🚫

- ### Approach 🔍
    1. **Tally the Moves:**  
    Use a HashMap (or dictionary) to count how many dancers perform each unique move, defined as `nums[i] - i`. Think of it as creating groups of dancers who are in perfect harmony.
    2. **Count the Synchronized Pairs:**  
    For each group, if a particular move appears `freq` times, it can form `freq * (freq - 1) / 2` perfect, synchronized pairs.
    3. **Total Dance Pairs:**  
    Calculate the total possible pairs using combinatorics (n choose 2), where n is the total number of dancers.
    4. **Determine the Awkward Duos:**  
    Subtract the number of synchronized (good) pairs from the total pairs to find the number of bad pairs—the ones that missed the beat.

- ### Time Complexity ⏱️
    - **$O(n):$** We traverse the list once to build our HashMap and then iterate through the map's keys. This gives us a linear runtime, ensuring the party stays lively even as the number of dancers increases! 🚀

- ### Space Complexity 📦
    - **$O(n):$** In the worst-case scenario, every dancer has a unique move, so our HashMap stores `n` entries. It's like having a guest list as long as the party itself—but hey, better to have all the moves in check than a chaotic dance floor! 🎉

- ### Code Implementation 💻
    - - **Python Solution 🐍✨**
        ```python3 []
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
        ```
    - **C++ Solution: 🅲➕➕**
        ```cpp []
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
        ```