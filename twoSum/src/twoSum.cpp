//============================================================================
// Name        : twoSum.cpp
// Author      : Marco Ruiz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
//#include "classSolution.h"

using namespace std;

class Solution{
public:
	vector<int> twoSumExe(vector<int> nums,int target);
};


int main() {

	int a = 9;
	int x;
	vector<int> list {2, 10, 7, 15};
	vector<int> finalResult;

	Solution obj1;
	//cout << list[1] << endl;

	finalResult = obj1.twoSumExe(list,a);

	return 0;
}

vector<int> Solution::twoSumExe(vector<int> nums,int target){

	vector<int> result(2);
	int i,j;
	int a, b;

	for(i = 0; i < nums.size(); i++)
	{
		for(j = nums.size()-1; j > i; j--)
		{
			a = nums[i];
			b = nums[j];
			//cout << nums[i] << endl;
			//cout << nums[j] << endl;

			if(a + b == target)
			{
				result[0] = i;
				result[1] = j;

				cout << result[0] << endl;
				cout << result[1] << endl;
				break;
			}

		}
	}
	return result;
}
