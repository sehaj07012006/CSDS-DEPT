#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int tar) {
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        int first = nums[i];
        int sec = tar - first;
        if (m.find(sec) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 10};
    int target = 14;
    vector<int> result = twoSum(nums, target);
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}