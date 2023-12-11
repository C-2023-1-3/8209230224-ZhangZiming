/*#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int len = strlen(hexString);
	int answer = 0;
	for (int i = 0; i < len-1; i++)
	{

		if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			answer = (hexString[i] - 55+answer) * 16;
		}
		else
		{
			answer = (hexString[i] - 48+answer) * 16;
		}



	};

	
	if (hexString[len-1] >= 'A' && hexString[len-1] <= 'F')
	{
		answer += (hexString[len - 1] - 55);
	}
	else
	{
		answer += (hexString[len - 1] - 48);
	}






	return answer;


}
int main()
{

	cout << parseHex("A5");




	system("pause");
	return 0;
}*/