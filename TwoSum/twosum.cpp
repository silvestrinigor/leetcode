#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndexs;
        for (int i = 0; i < nums.size(); ++i){
            if (numToIndexs.find(target - nums[i]) != numToIndexs.end()){
                return {numToIndexs[target - nums[i]], i};
            }
            numToIndexs[nums[i]] = i;
        }
        return {};
    }
};