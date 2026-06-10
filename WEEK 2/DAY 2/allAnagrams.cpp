#include <iostream>
#include <vector>
using namespace std;
vector<int> findAnagrams(string s, string p)
{
    vector<int> result;
    int n = s.size();
    int m = p.size();
    if (m > n)
        return result;
    vector<int> pCount(26, 0);
    vector<int> windowCount(26, 0);
    // Count frequencies in p and first window
    for (int i = 0; i < m; i++)
    {
        pCount[p[i] - 'a']++;
        windowCount[s[i] - 'a']++;
    }

    if (pCount == windowCount)
        result.push_back(0);
    for (int i = m; i < n; i++)
    {

        windowCount[s[i] - 'a']++;
        windowCount[s[i - m] - 'a']--;
        if (pCount == windowCount)
            result.push_back(i - m + 1);
    }
    return result;
}
int main(){
    string s , p;
    s = "cbaebabacd", p = "abc";
    vector<int> res;
    res = findAnagrams(s,p);
    for(int c : res){
        cout<<c<<" ";
    }
    
}