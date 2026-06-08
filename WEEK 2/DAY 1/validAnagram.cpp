#include <iostream>
#include <vector>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    vector<int> count(26, 0);

    for (char c : s)
    {
        count[c - 'a']++;
    }

    for (char c : t)
    {
        count[c - 'a']--;
    }

    for (int x : count)
    {
        if (x != 0)
            return false;
    }

    return true;
}
int main(){
    string s ="anagram";
    string t ="nagrmaa";
    cout<<isAnagram(s,t);
}