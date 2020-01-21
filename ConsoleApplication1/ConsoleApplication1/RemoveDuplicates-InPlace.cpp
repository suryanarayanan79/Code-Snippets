#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())return 0;
        if (nums.size() == 1)return 1;
        int i = 0; int j = 1;
        while (j < nums.size()) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i + 1;//since i is an index of the array.
    }
};