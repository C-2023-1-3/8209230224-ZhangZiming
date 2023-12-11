/*#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{ 
    int len = size1 + size2 - 1;
    size1--; size2--;
  
    while (size1 >= 0 && size2 >= 0)
    {

        if (list1[size1] >= list2[size2])
            {
                
            list3[len--] = list1[size1--];
            continue;
            }
        else
        {
            list3[len--] = list2[size2--];
        }
        }
    while(size2>=0)
    {
        list3[len--] = list2[size2--];
        
    }
    while (size1 >= 0)
    {
        list3[len--] = list1[size1--];
    }



    return;
    }



int main()
{
    int sure1,sure2;

    cout << "enter list 1";
    cin >> sure1;
    int* m = new int[sure1];

  
    
    for (int c = 0; c <sure1 ; c++)
    {
        cin >> m[c];
    }
    cout << endl << "enter list 2";
    cin >> sure2;
    int* n = new int[sure2];
    for (int a = 0; a < sure2; a++)
    {
        cin >> n[a];
    }

    cout << endl << "the merge list";
    int* p = new int[sure1 + sure2];
 
    merge(m, sure1, n, sure2, p);


    for (int i = 0; i < sure1 + sure2; i++)
    {
        cout << p[i] << " ";

    }






    delete []m;
    delete[] n;
    delete[]p;
    system("pause");
    return 0;
}*/