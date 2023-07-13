#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int c;

int A(int a, int b)
{
    c = a + b;
    return c;
}
void B(int (*ptr)(int, int))
{
    ptr(5, 5);
}
int compare(int a, int b,int c)
{
    if (a > b)
        return 1*c;
    else
        return -1*c;
}
int absolute(int a, int b,int c)
{
    if (abs(a) > abs(b))
        return 1*c;
    else
        return -1*c;
}
void bubbleSort(int Arr[], int n, int (*compare)(int, int,int),int c)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (compare(Arr[j] , Arr[j + 1],c) > 0)
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    // int (*ptr)(int, int);
    // ptr = &A;

    // int c = (*ptr)(5, 5);
    // cout << c << endl;
    // B(A)=B(ptr)  ----------------
    B(A);
    cout << c << endl
         << endl;

    // ---------------------bubble sort----------------
    int ascending=1,descending=-1;
    int Arr[] = {1, 4, 2, 6, 5, 9,-22,-7, 3, 8};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    bubbleSort(Arr, n, absolute,ascending);
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "]";
}
