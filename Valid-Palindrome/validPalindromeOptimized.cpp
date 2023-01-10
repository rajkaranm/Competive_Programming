#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(n)

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            while (l < r && !alphaNum(s[l])){
                l++;
            }
            while (l < r && !alphaNum(s[r])){
                r--;
            }

            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;

    }

    bool alphaNum(char c){
        if (
            (int('A') <= int(c) <= int('Z')) ||
            (int('a') <= int(c) <= int('z')) ||
            (int('0') <= int(c) <= int('9'))
            ) {
                return false;
            }
        return true;
    }
};

int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution s1;
    bool ans = s1.isPalindrome(s);
    cout<<ans<<endl;
    return 0;
}
