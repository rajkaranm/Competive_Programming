#include<iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> s_map, t_map;
        int size = s.length();

        for (int i = 0; i < size ; i++) {
            if (s_map.find(s[i]) == s_map.end())
                s_map[s[i]] = 1;
            else {
                s_map[s[i]] = s_map[s[i]] + 1;
            }

            if (t_map.find(t[i]) == t_map.end())
                t_map[t[i]] = 1;
            else{
                t_map[t[i]] = t_map[t[i]] + 1;
            }
        }

        for (int i = 0; i < size; i++) {
            if (s_map[s[i]] != t_map[s[i]])
                return false;
        }

        return true;

    }
};

int main() {
    Solution s;
    cout<<s.isAnagram("car", "rat")<<endl;
    return 0;
}
