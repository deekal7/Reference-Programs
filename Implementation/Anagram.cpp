#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) {
        unordered_map<string, multiset<string> > mp;
        for (string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            mp[t].insert(s);
        }
        vector<vector<string>> anagrams;
        for (auto m : mp) {
            vector<string> anagram(m.second.begin(), m.second.end());
            anagrams.push_back(anagram);
        }
        return anagrams;
    }
};
int main()
{
    vector<string> strs;
    strs.push_back("dog");
    strs.push_back("act");
    strs.push_back("god");
    strs.push_back("cat");
    strs.push_back("bat");
    strs.push_back("ogd");
    strs.push_back("tab");
    strs.push_back("smile");
    Solution s1;
    vector<vector<string>> result = s1.groupAnagrams(strs);
    for(int i=0;i<result.size();i++)
    {
        vector<string> list = result[i];
        for(int j=0;j<list.size();j++)
        {
            cout<<list[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
