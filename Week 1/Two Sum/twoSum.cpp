/*
--Two Sum--

Runtime: 723 ms, faster than 12.26% of C++ online submissions for Two Sum.
Memory Usage: 10.2 MB, less than 87.51% of C++ online submissions for Two Sum.
*/
#include <vector>
#include<iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ret;
    for (int i = 0; i < (nums.size()-1); i++){
        for (int j = i+1; j < nums.size(); j++){
            if (nums[i]+nums[j] == target) {
                ret.push_back(i);
                ret.push_back(j);
                return ret;
            }
        }
    }
    return ret;
}