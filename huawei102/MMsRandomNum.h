#pragma once
///����������㣬�ռ���ʱ�����������ʱ��ȥ��
///����������ã�������Ҫ��취ȥ��,�ڱ���ǰ�������ʱ����ȥ��
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
			totalCount++;//totalCount����һ���������λ�õ��±�
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