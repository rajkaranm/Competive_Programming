#include<iostream>
#include<vector>
using namespace std;

// Brute force solution to code

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,7,11,15};
    vector<int> ans = s.twoSum(nums, 9);
    for (int i = 0; i < 2; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
