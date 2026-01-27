#include <iostream>
#include <vector>
using namespace std;


class Solution 
{
public:
    static bool isSubsequence(string s, string t) 
	{
		int found = 0;
		int last_pos = 0;
		for (int i = 0; i < s.length(); i++)
		{
			for (int j = last_pos + 1; j < t.length(); j++)
			{
				if (t[j] == s[i])
				{
					last_pos = j;
					found ++;
					break;
				}
			}
		}

        return (found ==  s.length());
    }
};



int main(void)
{

	cout << Solution::isSubsequence("abc", "ahbgdc") << endl;

	return 0;
}
 
