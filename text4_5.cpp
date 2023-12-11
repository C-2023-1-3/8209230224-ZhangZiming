/*#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1>len2)return -1;

	for (int i = 0; i < len2-len1+1; i++)
	{
		for (int m = 0; m < len1; m++)
		{

			if (s1[m] != s2[i+m])break;
			if (m + 1 == len1)return i;

		}

	}




	return -1;


}
int main()
{

	string a, b;

		
	
	cout << "enter first string";
	getline(cin, a);
	cout << "enter second string";
	getline(cin, b);
	cout << indexOf(a.c_str(), b.c_str());








	system("pause");

}*/