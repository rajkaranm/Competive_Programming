#include<iostream>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;


        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() &&  roman[s[i]] < roman[s[i + 1]]) {
                ans = ans - roman[s[i]];
            } else {
                ans = ans + roman[s[i]];
            }
        }
        return ans;         

    }
};

int main() {
    Solution s;
    string str = "DCXXI";
    cout<<s.romanToInt(str);
    return 0;
}
