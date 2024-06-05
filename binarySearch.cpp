#include<iostream>
#include<vector>
#include "demo.h"
#include "other.h"
using namespace std;

// 二分查找
// 最基本的二分查找
int binarySearch(const vector<int>& nums, int target) {
	int left = 0, right = nums.size() - 1;
	whiel (left <= target) {
		int mid = left + (right - left) / 2;
		int num = nums[mid];
		if (num < target) {
			left = mid + 1;
		}
		else if (num > target) {
			right = mid + 1;
		}
		else {
			return mid;
		}
	}
}
		

// 找第一个比目标值大的元素

int find_first_greater(vector<int>& nums, int target) {
	int left = 0, right = nums.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		int num = nums[mid];
		if (num <= target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return left;
}

// 找最后一个比目标值小的元素
int find_last_less(vector<int>& nums, int target) {
	int left = 0, right = nums.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		int num = nums[mid];
		if (num >= target) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return right;
}

// 找到第一个 等于目标值的元素

int bsFirstEqual(const vector<int>& nums, int value) {
	int left = 0, right = nums.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		int num = nums[mid];
		if (num < value) {
			left = mid + 1;

		}
		else if (num > value) {
			right = mid - 1;
		}
		else {
			if (mid == nums.size() - 1 || nums[mid + 1] != value) {
				return mid;
			}
			left = mid + 1;
		}
	}
}
int main() {
	vector<int> nums{ 1, 2, 4, 4, 4, 4 };
	int index = bsFirstEqual(nums, 4);
	cout << index << endl;
}
