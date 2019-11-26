#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int left=0;
	int right=9;
	int key=3;
	int mid=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>key)
		{
			right=mid-1;
		}
		else if(arr[mid]<key)
		{
			left=mid+1;
		}
		else
		{
			printf("找到了，下标是：%d\n",mid);
			break;
		}
		if(left>right)
		{
			printf("找不到\n");
		}
	}
	
	return 0;
}
