/*#include<iostream>
using namespace std;
int main()
{
	bool flag = 0;
	int a, b;
	cin >> a >> b;
	if(a<=0||b<=0)
	{
	cout<<"erorr"<<endl;
	return 0;
	}
	for (int i = a;flag!=1; i+=a)
	{
		
		for (int m = b;m<=i; m+=b)
		{
	
			if (i == m)
			{
				cout << "最小公倍数为" << i << endl;
				flag = 1;
				break;
			}
			
		}
		
	}
	flag = 0;
	for (int i = a;flag!=1;i--)
	{
		if (a % i != 0)
		{
			continue;
		}

			for (int m = b;m>=i; m--)
			{
				if (b % m != 0)continue;
				if (i == m)
				{
					cout << "最大公约数为" << i << endl;
					flag = 1;
					break;
				}
			}

	}



	system("pause");
	return 0;
}*/




