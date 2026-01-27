#include <iostream>
#include <vector>
using namespace std;


class Solution 
{
public:
    static void moveZeroes(vector<int>& nums) 
	{
		int i = 0;
		int r = 0;
		int n = nums.size();

		while (i < n)
		{
			if (nums[i] == 0)
			{
				r++;
				nums.push_back(0);
				nums.erase(nums.begin() + i);
			}
		
			i++;
		}

		for (auto i : nums)
        	cout << i << " ";
    }
};

int main()
{
	vector<int> nums = {0,0,1};

	Solution::moveZeroes(nums);

	return 0;
}
