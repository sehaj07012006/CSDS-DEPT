#include <iostream>
#include <vector>
using namespace std;
void reverseString(vector<char> &s)
{
    int st = 0, end = s.size() - 1;
    while (st < end)
    {
        swap(s[st], s[end]);
        st++, end--;
    }
}
int main(){
    vector<char> s = {'V','a','l','v','o','l','i','n','e'};
    reverseString(s);
    cout<<"reversed string"<<endl;
    for(char ch : s){
        cout<<ch;
    }
    return 0;
}