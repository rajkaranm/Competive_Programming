#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto i = nums.begin(); i != nums.end(); i++) {
            if (*i == val) {
                cout<<i<<endl;
            }
        }
        return nums.size();
    }
};


int main() {
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    int val = 3;

    Solution s;
    cout<<s.removeElement(nums, val);
    return 0;
}
