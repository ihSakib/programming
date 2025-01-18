#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    static void  sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int left = 0, right = n - 1;
        int i = 0;
        while (i <= right)
        {
            if (nums[i] == 0)
            {
                swap(nums[left], nums[i]);
                left++;
                i++;
            }
            else if (nums[i] == 1)
            {
                i++;
            }
            else if (nums[i] == 2)
            {
                swap(nums[right], nums[i]);
                right--;
            }
        }

        for (auto i : nums)
        {
            cout<<i<<" ";
        }
        
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums= {0,0,0,0,0,1,1,1,1,2,2,2};
    Solution s1;
    s1.sortColors(nums);
    return 0;
}
