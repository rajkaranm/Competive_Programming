#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(n)

class Solution {
public:
    bool isPalindrome(string s) {
        string filteredStr = ""; 

        // Filtering non aplha-numeric value 
        for (int i = 0; i < s.size(); i++) {
            if (iswalnum(s[i])){
                filteredStr += tolower(s[i]);
            }
        }

        if (filteredStr.size() == 0 && s[0] != ' ')
            return false;

        // two pointer to traverse and check for palindrome
        int p1 = 0;
        int p2 = filteredStr.size() - 1;

        for (int i = 0; i < (filteredStr.size() / 2) + 1; i++) {
            if (filteredStr[p1] != filteredStr[p2]) {
                return false;
            }
            p1++;
            p2--;
        }
        return true;
    }
};

int main() {
    string s = ",.";
    Solution s1;
    bool ans = s1.isPalindrome(s);
    cout<<ans<<endl;
    return 0;
}
