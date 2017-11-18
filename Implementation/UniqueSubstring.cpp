#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s) {
    vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start) //has the char been encountered in the substring before
                start = dict[s[i]]; //if yes the prev encounter is the new start position
            dict[s[i]] = i; //latest encounter of the char
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
