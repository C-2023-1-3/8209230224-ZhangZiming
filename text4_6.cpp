/*#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int count_s[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		for (int b = 0; b < 26; b++)
		{
			if (int(s[i]) == 97 + b || int(s[i]) == 65 + b)
			{
				count_s[b] += 1;
			}
		}
	}

	for (int m = 0; m <26; m++)
	{
		if (count_s[m] != 0)
		{
			cout << char(97 + m) << ":" << count_s[m] << "times" << endl;
		}

	}




	return ;

}
int arr[26];
int main()
{
	string a;
	cout << "enter a string:";
	getline(cin, a);
	
	


	count(a.c_str(), arr);















	system("pause");
	return 0;
}*/