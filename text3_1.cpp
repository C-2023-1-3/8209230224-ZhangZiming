/*#include<iostream>
using namespace std;

int getnum01(int &m, int &n)
{
	

	if (m < 0 || n < 0)
	{
		cout << "erorr" << endl;
		return false;
	}
	if (m == 0 || n == 0)return 0;
	for (int c = m;; c += m)
	{

		for (int d = n; d <= c; d += n)
		{

			if (c == d)
			{
			
				return c;
			}

		}

	}
}
int getnum02(int &m,int &n)
{
	if (m < 0 || n < 0)
	{
		cout << "erorr" << endl;
		return false;
	}
	if (m == 0 || n == 0)return 0;
	for (int c = m;;c--)
	{
		if (m % c!= 0)
		{
			continue;
		}

			for (int d = n;d>=c; d--)
			{
				if (n % d != 0)continue;
				if (c == d)
				{
					return c;
					
				}
			}

	}











}
int main()
{

	int a, b;
	cin >> a >> b;
	cout << "最小公倍数" << getnum01(a, b) << " " << "最大公因数" << getnum02(a, b) << endl;


	
	











	system("pause");
	return 0;

}*/