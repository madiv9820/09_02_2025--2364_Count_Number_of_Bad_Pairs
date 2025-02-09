# [2364. Count the Number of Bad Pairs](https://leetcode.com/problems/count-number-of-bad-pairs) 😈

**Difficulty:** Medium 🧐 <br>
**Topics:** Array 🧩, Hash Table 📚, Math ➕➖, Counting 🔢
<hr>

### 📝 Problem Statement

You have a 0-indexed array called `nums`. Imagine it as a line-up of characters at a party 🎉. Now, a pair of indices `(i, j)` is dubbed a **bad pair** if:
- `i < j` (because we’re only looking from left to right 👉)
- `j - i` **is not equal to** `nums[j] - nums[i]` (basically, if the spacing between their positions doesn’t match the spacing between their values, they just aren’t in sync! 😵)

Your mission (if you choose to accept it) is to count all these rebellious, out-of-sync pairs in `nums`! Happy hunting, and may the odds be ever in your favor! 🔍😎💻
<hr>

### 💡 Examples
- **Example 1:** 🎉 <br>
**Input:** `nums = [4, 1, 3, 3]` <br>
**Output:** `5` 😱 <br>
**Explanation:** <br>
Imagine our array as a quirky party lineup! Each pair of indices is like a dance duo—if their moves don't match, they're a bad pair! Here's the lowdown: <br>
**- Pair (0, 1):** <br>
Index difference: 1 - 0 = 1 <br>
Value difference: 1 - 4 = -3 <br>
Since 1 doesn't equal -3, these two are totally out of sync! 🚫 <br>
**- Pair (0, 2):** <br>
Index difference: 2 - 0 = 2 <br>
Value difference: 3 - 4 = -1 <br>
2 vs. -1? Not a match! Another bad pair! 😵 <br>
**- Pair (0, 3):** <br>
Index difference: 3 - 0 = 3 <br>
Value difference: 3 - 4 = -1 <br>
3 and -1 just don’t groove together! 💃🚫 <br>
**- Pair (1, 2):** <br>
Index difference: 2 - 1 = 1 <br>
Value difference: 3 - 1 = 2 <br>
1 vs. 2—mismatch alert! ⚠️ <br>
**- Pair (2, 3):** <br>
Index difference: 3 - 2 = 1 <br>
Value difference: 3 - 3 = 0 <br>
1 vs. 0? They just aren’t on the same page! 📖🚫

- **Example 2:** 🌟 <br>
**Input:** `nums = [1, 2, 3, 4, 5]` <br>
**Output:** `0` 😎 <br>
**Explanation:** <br>
This time, our array is the picture of perfection—a well-choreographed dance party! 🕺💃 Every pair of indices is totally in sync because the difference in positions perfectly matches the difference in values. It's like each dancer is following the beat flawlessly, so there are no bad pairs to trip up the fun! 🎶✨
<hr>

### Constraints: 🔒
- **Array Size:** 📏 <br>
<code>1 <= nums.length <= 10<sup>5</sup></code> <br>
Whether it's a cozy get-together or a grand bash, our array can host anywhere from a few to a hundred thousand guests! 🎉
- **Element Values:** 🔢 <br>
<code>1 <= nums[i] <= 10<sup>9</sup></code> <br>
Each number in the array can be as modest as a 1 or as astronomical as a billion. Talk about aiming high! 🚀
<hr>

### Hints: 💡
- **Look on the bright side!** <br>
Ever thought about counting the number of pairs that are not bad pairs? Sometimes it's easier to count the good ones and work your magic from there! 🌞😉
- **Spot the symmetry!** <br>
Notice that `(j - i != nums[j] - nums[i])` is just another way of saying `(nums[i] - i != nums[j] - j)`. Pretty neat, right? 🔄😎
- **Keep track like a pro!** <br>
Maintain a counter for each value of `nums[i] - i` as you go. And for the win, use a HashMap to keep everything efficient and organized! 🗺️🚀
<hr>