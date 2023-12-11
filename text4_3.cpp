/*#include<iostream>
using namespace std;
void change_status(bool arr[], int step,int num)
{
	for (int i = num; i < 100; i += step)
	{

		if (arr[i] == 0)
		{
			arr[i] = 1;
			continue;
		}
		arr[i] = 0;

	}

	return;
}

int main()
{
	int step = 1;
	bool arr[100] = { 0 };

	for (int m = 0; m < 100; m++)
	{
		step = m + 1;
		change_status(arr, step, m);
	}
	for (int a = 0; a < 100; a++)
	{
		if (arr[a])
		{
			cout << a+1 << endl;
		}
	}



	system("pause");
	return 0;
}*/