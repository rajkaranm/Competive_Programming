#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> hashTable;
        int diff;
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            diff = target - nums[i];
            if (hashTable.find(diff) != hashTable.end() && hashTable.find(diff)->second != i) {
                ans.push_back(i);
                ans.push_back(hashTable.find(diff)->second);
                return ans;
            }
            hashTable[nums[i]] = i;
        }
        return ans;
    }
};


int main(){
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = s.twoSum(nums, 9);
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
