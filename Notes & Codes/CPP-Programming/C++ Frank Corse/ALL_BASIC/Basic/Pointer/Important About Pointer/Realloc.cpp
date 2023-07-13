#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter size of array\n";
    cin >> n;
    int *A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }

    int *B = (int *)realloc(A, n * 2 * sizeof(int));
    B[0] = 24;
    /* realloc fun gives same memory in this case
   if we change B it reflect in A also  */
    cout << "Prev block address = " << A << " new address " << B << endl;
    for (int i = 0; i < 2 * n; i++)
    {
        cout << B[i] << " ";
    }
    
    cout << " Value of A After realloc " << n+1 << "/2 :\n";
    realloc(A, n / 2 * sizeof(int)); // size is 5/2 previous value deallocated
    for (int i = 0; i < 2 * n; i++)
    {
        cout << A[i] << " " << endl;
    }

    // -------------- Free using realloc-------------
    cout << endl;
    cout << " Value of A After realloc 0*size :\n";
    realloc(A, 0 * sizeof(int)); // deallocated whole array  even we free A some value they contain
    // free(A);


    for (int i = 0; i <  n; i++)
    {
        cout << A[i] << " " << endl;
    }

// --------------Like Malloc-----------------------
    int *C = (int *)realloc(nullptr, n * sizeof(int)); // Equivalent to malloc
    cout << "\nAddress of C :" << C << endl;

}