/*
Problem: 26 - Remove Duplicates from Sorted Array
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

Approach:
- 
Pattern: Array

*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> updated_nums;  
        int count = 0;
        int l = nums.size();
        for(int i=1;i<=l;i++){
            if (nums[i] == nums[i-1]){
                count++;
            }
        }
        cout<<count<<"\n";
        updated_nums.push_back(nums[0]);
        for(int i=1;i<l;i++){
            if(nums[i]!=nums[i-1]){
            updated_nums.push_back(nums[i]);
            }
             
        }
        for(int i=0;i<l;i++){
            cout<<updated_nums[i]<<" ";
        }
        
        
    }

};

int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obj1;
    obj1.removeDuplicates(nums);

}