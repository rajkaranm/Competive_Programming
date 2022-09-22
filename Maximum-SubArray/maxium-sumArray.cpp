#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        /*
        // Brute force
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
            }
            if (sum > max && sum > 0){
                max = sum;
            }
            else {
                max = sum;
            }
        }
        return max;
        */
        int maxSum = nums[0];
        int curSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if curSum < 0:
                curSum = 0;
            curSum += nums[i];
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};

int main() {
    vector<int> nums = {-2,-1};
    Solution s;
    cout<<s.maxSubArray(nums)<<endl;
    return 0;
}
