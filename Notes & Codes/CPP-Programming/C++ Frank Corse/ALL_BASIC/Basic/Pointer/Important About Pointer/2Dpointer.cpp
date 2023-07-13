#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {{100, 101, 102}, {110, 111, 112}};
    int(*ptr)[3] = A;
    /* remember * and pointer variable always
     inside in parenthes  for precendence issue */

    cout << "ptr to 2D" << endl
         << *(*(ptr + 1) + 2) << endl;

    // ----------------------------3D Array ----------------------------

    int A3[2][3][3] = {
        {{0, 1, 2},
         {10, 11, 12},
         {20, 21, 22}},
        {{100, 101, 102},
         {110, 111, 112},
         {120, 121, 122}}};

    int(*ptr3d)[3][3] = A3;

    cout <<"\t"<< "Ptr to 3D" << endl<<endl;
    for (int i=0; i < 2; i++)
    {
        for (int j{}; j < 3; j++)
        {
            for (int k{}; k < 3; k++)
            {
                cout << *(*(*(ptr3d + i) + j) + k) << "\t";
            }
            cout << endl;
        }
    }
    return 0;
}