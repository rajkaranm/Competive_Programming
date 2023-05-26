#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {1,2,1};
    Solution s;
    nums = s.getConcatenation(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout<<nums[i]<<endl;
    }
    return 0;
}
