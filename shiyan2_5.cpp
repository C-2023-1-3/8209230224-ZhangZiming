/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	int zimu = 0; int kongge = 0; int shuzi = 0; int other = 0;
	for (int i=0;i<a.size();i++)
	{
		if ((int(a[i]) <= 90 && int(a[i]) >= 65) || (int(a[i]) <= 122 && int(a[i]) >= 97))
		{
			zimu++;
			continue;
		}
		else if (a[i] == ' ')
		{
			kongge++;
			continue;
		}
		else if (a[i]>='0'&&a[i]<='9')
		{
			shuzi++;
			continue;
		}
		else
		{
			other++;

		}
	}

	cout << "数字个数" << shuzi << " " << "字母个数" << zimu << " " << "空格个数" << kongge << " " << "其他个数" << other;





	system("pause");
	return 0;
}*/