/*#include<iostream>
using namespace std;
void pai(int arr[],int len)
{

	for (int i = 0; i < len; i++)
	{

		for (int m = 0; m < len - 1 - i; m++)
		{
			if (arr[m] > arr[m + 1])
			{
				int mid = arr[m + 1];
				arr[m + 1] = arr[m];
				arr[m] = mid;
			}

		}

	}

	return;
}
int main()
{



	int lim = 0;
	cout << "cin size" << endl;
	cin >> lim;
	int* p = new int[lim];
	int* mid = p;
	cout << "cin element" << endl;
	for (int i = 0; i < lim; i++)
	{
		cin >> p[i];
		
	}


	pai(p,lim);
	for (int i = 0; i < lim; i++)
	{
		cout << *mid << "  ";
		mid++;
	}


	delete[]p;
	mid - NULL;
	

	system("pause");
	return 0;
}*/