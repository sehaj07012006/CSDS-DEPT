#include <iostream>
#include <vector>
using namespace std;
bool checkInclusion(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 > len2)
        return false;
    vector<int> freq1(26, 0); // s1
    vector<int> freq2(26, 0); // window ki

    for (char ch : s1)
    {
        freq1[ch - 'a']++;
    }

    for (int i = 0; i < len1; i++)
    {
        freq2[s2[i] - 'a']++;
    }
    if (freq1 == freq2)
        return true;
    for (int i = len1; i < len2; i++)
    {

        char newChar = s2[i];
        char oldChar = s2[i - len1];
        freq2[newChar - 'a']++;
        freq2[oldChar - 'a']--;
        if (freq2 == freq1)
            return true;
    }

    return false;
}
int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout<<checkInclusion(s1,s2);
}