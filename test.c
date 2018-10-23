//给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
//你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
//示例 :
//给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回[0, 1]

#include<stdio.h>
#include<Windows.h>

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
//没有考虑全为负数的情况
//int* twoSum(int* nums, int numsSize, int target) {
//	int i = 0;
//	int j = 0;
//	int tmp = -1;
//	static int array[3] = { 0 };//加static可以保证返回的变量不消失
//	for (i = 0; i<numsSize; i++)
//	{
//		tmp = nums[i]<target ? (target - nums[i]) : (nums[i] - target);
//		for (j = i + 1; j<numsSize; j++)
//		{
//			if (tmp == nums[j])
//			{
//				array[0] = nums[i];
//				array[1] = nums[j];
//				return array;//找到了
//			}
//		}
//	}
//	return NULL;//没找到
//}

int* twoSum(int* nums, int numsSize, int target) {
	int i = 0;
	int j = 0;
	int tmp = -1;
	static int array[3] = { 0 };
	for (i = 0; i<numsSize; i++)
	{
		for (j = i + 1; j<numsSize; j++)
		{
			tmp = nums[i] + nums[j];
			if (tmp == target)
			{
				array[0] = nums[i];
				array[1] = nums[j];
				return array;//找到了
			}
		}
	}
	return NULL;//没找到
}

int main()
{
	int array[] = {2,7,11,15};
	int numsSize = sizeof(array) / sizeof(array[0]);
	int target = 9;
	int *cur = twoSum(array, numsSize, target);
	printf("%d ", *cur);
	printf("%d ", *(cur+1));
	system("pause");
	return 0;
}

