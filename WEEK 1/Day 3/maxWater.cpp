#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int> &height)
{
    int lp = 0, rp = height.size() - 1, maxWater = 0; // 2 pointer approach
    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater = max(currWater, maxWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}
int main(){
    vector<int> H = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(H);
}
