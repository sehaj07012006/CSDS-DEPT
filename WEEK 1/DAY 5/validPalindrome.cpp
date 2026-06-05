#include <iostream>
#include <vector>
using namespace std;
bool isPalindrome(string str)
{ // 2 pointer appr
    int s = 0, e = str.length() - 1;
    while (s < e)
    {
        if (!isalnum(str[s]))
        {
            s++;
            continue;
        }
        if (!isalnum(str[e]))
        {
            e--;
            continue;
        }
        if (tolower(str[s]) != tolower(str[e]))
        {
            return false;
        }
        s++, e--;
    }
    return true;
}
int main(){
    string s = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s);
}