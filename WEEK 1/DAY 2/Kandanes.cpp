// max subarraay sum
#include <iostream>
#include <vector>
using namespace std;
int maxSubSum(vector<int> &nums)
{
    int maxSum = INT16_MIN;
    int curSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        curSum += nums[i];
        maxSum = max(maxSum, curSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubSum(nums);
}