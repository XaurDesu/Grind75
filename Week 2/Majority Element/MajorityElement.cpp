/*
--Majority Element--

Runtime: 23 ms, faster than 73.26% of C++ online submissions for Majority Element.
Memory Usage: 19.5 MB, less than 92.22% of C++ online submissions for Majority Element.
*/
#include <vector>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    return nums[(nums.size()/2)];
}

int main(){
    cout<<("Majority Element");
    /*Add test cases here*/
    cout<<string(majorityElement([3,2,3]));
    cout<<string(majorityElement([2,2,1,1,1,2,2]));
}