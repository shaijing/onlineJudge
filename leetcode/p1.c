#include <stdc.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main() {
	int arr[]= {2,3};
	int size;
	int *a =  twoSum(arr,2,5,&size);
	printf("%d %d",a[0],a[1]);
	return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	*returnSize =2;
	int * arr = (int *) calloc(3,sizeof(int));
	int i=0,j=0,is=0;

	for (i =0; i<numsSize; i++) {
		for(j= i+1; j<numsSize; j++) {
			if(nums[i]+nums[j]==target)
				is=1;
			break;
		}
		if(is)
			break;
	}
	arr[0]=i,arr[1]=j;

	return arr;


}

int* twoSum_0(int* nums, int numsSize, int target, int* returnSize) {
	for(int i=0; i<numsSize-1; i++) {                   //�ӵ�һ��Ԫ�ؿ�ʼ����ѭ��
		for(int j=i+1; j<numsSize; j++) {               //�ֱ�������Ԫ����ӽ��бȽ�
			if(nums[i]+nums[j]==target) {               //����Ԫ�����Ϊ����Ŀ��ֵtarget
				int *a=(int*)malloc(sizeof(int)*2);     //������ʾ���붯̬����
				a[0]=i;                                 //���õ���Ԫ���±괫������
				a[1]=j;
				*returnSize=2;                          //���ص������СΪ2
				return a;                               //��������
			}
		}
	}
	return 0;
}

