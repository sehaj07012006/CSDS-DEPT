#include <iostream>
#include <algorithm>
using namespace std;
string reverseWords(string s) {
    int n = s.length();
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;
        }
    }
    return s;
}
int main() {
    string s = "Mr India";
    cout << reverseWords(s);
    return 0;
}