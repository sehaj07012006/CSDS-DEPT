#include <iostream>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
    int arr[26] = {0};
    for (char ch : magazine)
    {
        arr[ch - 'a']++;
    }
    for (char ch : ransomNote)
    {
        arr[ch - 'a']--;

        if (arr[ch - 'a'] < 0)
        {
            return false;
        }
    }
    return 1;
}
int main(){
    string rN ="aa";
    string m ="aab";
    cout<<canConstruct(rN , m);

}