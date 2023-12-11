/*#include<iostream>
using namespace std;
int countnum = 0;

bool is_prime(int num)
{
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)return false;
		if (i == num / 2 - 1)
		{
			countnum++;
			return true;
		}
	}
	return true;
}
int main()
{
	
	      int end_flage = 0;
		for (int i = 2;countnum<=200; i++)
		{
			if (!is_prime(i))
			{
				continue;
			}
				 end_flage++;
				if(end_flage < 11)
				{
					cout << i << " ";
					continue;
				}
				cout << endl; 
				end_flage = 0;
				cout<< i << " ";
		}

	









	system("pause");
	return 0;
}*/