/*#include<iostream>
using namespace std;
class student
{

public:
	int num;
	int score;


	void Cin()
	{
		cout << "enter num and score" << endl;
		cin >> this->num >> this->score;

	};
};
student max(student* p)
{
	
	student max =* p;
	for (int i = 0; i < 4; i++)
	{
		if ((p + 1)->score > max.score)
		{
			max = *(p + 1);
			p++;
			continue;
		}
		p++;
	}



	cout << "×î´ó" << max.num;

	return max;

}
	int main()
	{
		student s1, s2, s3, s4, s5;//setup object
		s1.Cin(); s2.Cin(); s3.Cin(), s4.Cin(); s5.Cin();
		student arr[5] = { s1,s2,s3,s4,s5 };

		max(arr);
		
		system("pause");
		return 0;
	}*/