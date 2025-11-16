#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++)
        {
            char c = s[right];

            if (mp.count(c) && mp[c] >= left)
            {
                left = mp[c] + 1;
            }

            mp[c] = right;

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main()
{
    Solution sol;

    string s = "abcabcbb";
    cout << sol.lengthOfLongestSubstring(s) << endl; // 3

    s = "bbbbb";
    cout << sol.lengthOfLongestSubstring(s) << endl; // 1

    s = "pwwkew";
    cout << sol.lengthOfLongestSubstring(s) << endl; // 3 ("wke")

    return 0;
}
