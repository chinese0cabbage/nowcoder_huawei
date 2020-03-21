#pragma once
#include<iostream>
using namespace std;
void Excute() {
	char ch, str[5000];
	int num = 0;
	int chNum;
	cin.getline(str, 5000);
	cin.get(ch);
	chNum = int(ch);
	for (int i = 0; i < 5001; i++)
	{
		if (str[i] == '\0')
			break;
		if (int(str[i]) == chNum || abs(int(str[i])-chNum) == 32)
		{
			num++;
		}
	}
	cout << num;
}