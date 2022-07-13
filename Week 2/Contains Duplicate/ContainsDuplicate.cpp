/*
--Contains Duplicate--

Runtime: 100 ms, faster than 89.36% of C++ online submissions for Contains Duplicate.
Memory Usage: 46.7 MB, less than 78.80% of C++ online submissions for Contains Duplicate.
*/
#include <vector>
#include<iostream>
#include <bits/stdc++.h>
    
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++){
        if (nums[i-1] == nums[i]){
            return true;
        }
    }
    return false;
}