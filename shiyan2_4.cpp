#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "������Ĳ�����\n";
	int a, b;
	cin >> a >> b;
	char c;
	cout << "������Ĳ�������\n";
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
		cout << "��������Ϸ�";
		break;

	}


	system("pause");
	return 0;
}