#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;

    for (string str : strs)
    {
        string key = str;
        sort(key.begin(), key.end());

        mp[key].push_back(str);
    }

    vector<vector<string>> ans;

    for (auto &pair : mp)
    {
        ans.push_back(pair.second);
    }

    return ans;
}
int main()
{
    vector<string> strs = {"eat", "ate", "listen", "silent", "bat"};
    vector<vector<string>> ans = groupAnagrams(strs);
    for (auto group : ans)
    {
        for (auto word : group)
        {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}