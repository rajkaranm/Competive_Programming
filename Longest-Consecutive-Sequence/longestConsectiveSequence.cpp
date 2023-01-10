#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        int longest = 0;
        int size = nums.size();

        for(int i = 0; i < size; i++) {
            set.insert(nums[i]);
        }

        for (int i = 0; i < size; i++) {
            if (set.find(nums[i] - 1) == set.end()) {
                int length = 1;
                while (set.find(nums[i] + length) != set.end()) {
                    length++;
                }

                longest = max(longest, length);
            }
        }
        return longest;
    }
};

int main() {
    Solution s;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int ans = s.longestConsecutive(nums);
    cout<<ans<<endl;
    return 0;
}
