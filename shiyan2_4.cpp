#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "输入你的操作数\n";
	int a, b;
	cin >> a >> b;
	char c;
	cout << "输入你的操作类型\n";
	cin >> c;
	switch (c)
	{
	case'+':
		cout << a<<"+"<<b<<"=" << a + b << endl;
		break;
	case'-':
		cout << a<<"-"<<b<<"=" << a - b << endl;
		break;
	case'*':
		cout << a<<"*"<<b<<"=" << a * b << endl;
		break;
	case'/':
		cout << a<<"/"<<b<<"=" << a / b << endl;
		break;
	default:
		cout << "运算符不合法";
		break;

	}


	system("pause");
	return 0;
}