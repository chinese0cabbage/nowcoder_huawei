#include<iostream>
using namespace std;

bool IsChar(char ch) {
	int chNum = int(ch);
	if ((chNum == 32) || (chNum >= 65 && chNum <= 90) || (chNum >= 97 && chNum <= 122))
		return true;
	return false;
}

int SearchStrEnd(char str[]) {
	int left = 0, right = 5000, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (str[mid] == '\0')
			return mid;//当前位置的元素是字符串结尾
		if (!IsChar(str[mid]))
			right = mid - 1;
		else
			left = mid + 1;
	}//二分法寻找字符串的末端，相较于逐个搜索更稳定
	return 0;
}

void Excute() {
	char str[5001];
	int num;
	int tmp;
	cin.getline(str, 5000);
	num = SearchStrEnd(str);
	tmp = num;
	while (int(str[tmp]) != 32) {
		tmp--;
	}
	cout << num - tmp - 1;
}