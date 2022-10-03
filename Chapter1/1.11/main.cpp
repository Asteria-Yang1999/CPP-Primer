#include <iostream>
using namespace std;

int main()
{
	int v1, v2;
	cout << "请分别输入两个整数：" << endl;
	cin >> v1;
	cin >> v2;
	if (v1 < v2)
	{
		while (v1 <= v2)
		{
			cout << v1 << endl;
			++v1;
		}
	}
	else
	{
		while (v1 >= v2)
		{
			cout << v1 << endl;
			--v1;
		}
	}
	return 0;
}