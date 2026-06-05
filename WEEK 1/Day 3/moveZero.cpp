#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int j = 0; // posn for next non zero element
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
int main(){
    vector<int> nums ={2,3,0,3,2};
    moveZeroes(nums);
    for(int val : nums){
        cout<<val;
    }
}