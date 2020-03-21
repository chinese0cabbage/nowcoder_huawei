#pragma once
///插入排序最方便，收集的时候排序，排序的时候去重
///快速排序最好，但是需要想办法去重,哨兵向前向后搜索时可以去重
#include<iostream>;
using namespace std;
void ExchangeValByPointer(int* a, int* b);
void Excute() {
	int inputCount, totalCount = 0, arr[1001];
	cin >> inputCount;
	cin >> totalCount;
	while (inputCount!=1001)
	{
		while (inputCount > 0)
		{
			cin >> arr[totalCount];
			totalCount++;//totalCount是下一个可以添加位置的下标
		}
		cin >> inputCount;
	}
}

void QuickSortDistrinct(int arr[], int left, int right) {
	int sentry = arr[left], hole = left, originLeft = left, originRight = right;
	if (right-left == 1)
	{
		if (arr[left] == arr[right]) 
		{
			arr[right] == 1001;

		}
		else if(arr[left] > arr[right])
		{
			ExchangeValByPointer(&arr[left], &arr[right]);
		}
	}
	while (right > left)
	{
		while (sentry <= arr[right])
		{
			if (sentry == arr[right])
			{
				arr[right] = 1001;
			}
			right--;
		}
	}
}

void ExchangeValByPointer(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}