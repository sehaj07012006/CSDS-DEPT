#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool containsDup(vector<int> &nums)
{
    unordered_set<int> set;
    for (int val : nums)
    {
        if (set.count(val))
        {
            return true;
        }
        set.insert(val);
    }
    return false;
}
int main(){
    vector<int> vec ={1,2,3,4,1};
    cout<<containsDup(vec);
}
