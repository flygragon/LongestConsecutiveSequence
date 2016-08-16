#pragma once
#include<vector>
#include<iostream>
#include<algorithm>
#include<time.h>

class longestConsecutiveSequence {
public:
	int longestConsecutive(std::vector<int>& nums) {
		if (nums.empty())
			return 0; 
		clock_t start,end;
		//start = clock();
		sort(nums.begin(), nums.end());
		int maxlen = 1, templen = 1;
		for (int i = 1, len = nums.size(); i <len; i++)
			if (nums[i] == nums[i - 1] + 1)
				templen++;
			else if (nums[i] == nums[i - 1])
				continue;
			else {
				if (templen >maxlen)
					maxlen = templen;
				templen = 1;
			}
			if (templen >maxlen)
				maxlen = templen;
			end = clock();
			std::cout << "Processing time:" <<end/(double)CLOCKS_PER_SEC << '\n';
			return maxlen;
	}
};