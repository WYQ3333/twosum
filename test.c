//����һ�����������һ��Ŀ��ֵ���ҳ������к�ΪĿ��ֵ����������
//����Լ���ÿ������ֻ��Ӧһ�ִ𰸣���ͬ����Ԫ�ز��ܱ��ظ����á�
//ʾ�� :
//���� nums = [2, 7, 11, 15], target = 9
//
//��Ϊ nums[0] + nums[1] = 2 + 7 = 9
//���Է���[0, 1]

#include<stdio.h>
#include<Windows.h>

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
//û�п���ȫΪ���������
//int* twoSum(int* nums, int numsSize, int target) {
//	int i = 0;
//	int j = 0;
//	int tmp = -1;
//	static int array[3] = { 0 };//��static���Ա�֤���صı�������ʧ
//	for (i = 0; i<numsSize; i++)
//	{
//		tmp = nums[i]<target ? (target - nums[i]) : (nums[i] - target);
//		for (j = i + 1; j<numsSize; j++)
//		{
//			if (tmp == nums[j])
//			{
//				array[0] = nums[i];
//				array[1] = nums[j];
//				return array;//�ҵ���
//			}
//		}
//	}
//	return NULL;//û�ҵ�
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
				return array;//�ҵ���
			}
		}
	}
	return NULL;//û�ҵ�
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

