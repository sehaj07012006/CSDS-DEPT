#include <iostream>
using namespace std;
string longestPalindrome(string s)
{
    int n = s.length();
    if (n <= 1)
        return s;
    string LPS = s.substr(0, 1);
    for (int i = 0; i < n; i++)
    {
        // Odd length palindrome
        int low = i;
        int high = i;
        while (low >= 0 && high < n && s[low] == s[high])
        {
            low--;
            high++;
        }
        string palindrome = s.substr(low + 1, high - low - 1);
        if (palindrome.length() > LPS.length())
            LPS = palindrome;
        low = i;
        high = i + 1;
        while (low >= 0 && high < n && s[low] == s[high])
        {
            low--;
            high++;
        }
        palindrome = s.substr(low + 1, high - low - 1);

        if (palindrome.length() > LPS.length())
            LPS = palindrome;
    }

    return LPS;
}
int main(){
    string s  = "babaadddda";
    cout<<longestPalindrome(s);
}