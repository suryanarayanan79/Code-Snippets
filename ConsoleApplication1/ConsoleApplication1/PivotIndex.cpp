#include<vector>
using namespace std; 
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.empty())return -1;
        int pivotIndex = -1;
        int leftPivotIndex = -1;
        int leftsum, rightsum;
        for (int i = 0; i <= nums.size() - 1; i++) {
            if (i == 0) {
                leftsum = 0;
            }
            else
            {
                leftsum = Sum(0, i - 1, nums);
            }
            if (i == nums.size() - 1)
                rightsum = 0;
            else
                rightsum = Sum(i + 1, nums.size() - 1, nums);
            if (leftsum == rightsum) {
                if (pivotIndex == -1) {
                    leftPivotIndex = i;
                }
                pivotIndex = i;

            }
        }
        return leftPivotIndex;
    }

    int Sum(int startIndex, int endIndex, vector<int>& num) {
        int sum = 0;
        int i = startIndex;
        do {
            sum += num[i];
            i++;
        } while (i <= endIndex);
        return sum;
    }
};