#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char> &chars)
{
    int n = chars.size();
    int i = 0;
    int w = 0;
    while (i < n)
    {
        char cur = chars[i];
        int count = 0;
        while (i < n && chars[i] == cur)
        {
            count++;
            i++;
        }
        chars[w++] = cur;
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char c : cnt)
            {
                chars[w++] = c;
            }
        }
    }
    return w;
}
int main(){
    vector<char> chars = {'a','a','b','b','b','b'};
    cout<<compress(chars);
}