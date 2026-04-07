/*
Problem: 1752 - Check if Array is Sorted and Rotated
Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

Approach:
- Count number of positions where nums[i] > nums[(i+1) % n]
- If count <= 1 → valid rotated sorted array

Time Complexity: O(n)
Space Complexity: O(1)

Pattern: Array
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};