/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double a[3];
	cout << "请输入三角形边长\n";
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	
	sort(&a[0], &a[2]);



	if (a[0]<= 0 || a[1] <= 0 || a[2] <= 0)cout << "error\n";

	if (a[0]+a[1]<=a[2])
	{
		cout << "该3边长不能构成\n";
	}
	else
	{
		cout << "该三角形周长" << a[0]+a[1]+a[2]<<endl;
		if (a[0]==a[1]||a[1]==a[2])
		{
			cout << "为等腰三角形\n";
		}
		else
		{
			cout << "不为等腰三角形\n";
		}
	}



	system("pause");
	return 0;

}*/