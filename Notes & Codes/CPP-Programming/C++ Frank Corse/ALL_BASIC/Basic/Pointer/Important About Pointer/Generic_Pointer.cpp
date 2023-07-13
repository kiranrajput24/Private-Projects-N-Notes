#include <iostream>
using namespace std;
void Intfun(int A[], int Size)
{
    for (int i = 0; i < Size; i++)
        cout << A[i] << endl;
}

void Charfun(char *c)
{
    // c[0]='H';

    cout<<c<<endl;
}

int main()
{
    // ---------------Int array--------------------
    int A[] = {1, 2, 3, 4, 5};
    int Size;
    Size = ((sizeof(A)) / (sizeof(A[0])));
    Intfun(A, Size);

    // ---------------Char array--------------------
    char* c="kiran";
    Charfun(c);
    return 0;
}