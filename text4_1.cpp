/*#include<iostream>
#include<set>
using namespace std;
int main()
{
	//  int mid;
	//  set<int>s;
	//  for (int i = 0; i < 10; i++)
	//  {
	//  	cin >> mid;
	//  	s.insert(mid);
	//
	//  }
	//  for (set<int>::iterator a = s.begin(); a != s.end(); a++)
	//  { 
	//	  cout << *a << endl;
	//  } //非数组情况下可利用set实现对程序时间复杂度的优化


	int arr[10];
	int arr_count = 0; 
	bool zero_flag = false;
	for (int i = 0; i < 10; i++)
	{
		int sure;
		cin >> sure;
		if (sure == 0 && zero_flag != true)
		{
			arr[arr_count++] = sure;
			zero_flag = true;

		}
		for (int m = 0; m < 10; m++)
		{

			if (sure == arr[m])
			{
				break;

			}

			if (m + 1 == 10)
			{
				arr[arr_count++] = sure;

			}
		}
		
		
	}




	for (int a = 0; a < arr_count; a++)
	{
		cout << arr[a] << endl;
	}

	system("pause");
	return 0;
}*/