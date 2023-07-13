

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    /* int x, y;
    cin >> x >> y;
    int *Arr[x];
    while (x--)
    {
        int N;
        static int z = 0;  // if i did't make it static , it redeclare and gives error sometihng
        cin >> N;
        Arr[z] = new int[N];
        for (int i = 0; i < N; i++)
            cin >> Arr[z][i];
            z++;
    }

    while (y--)
    {
        int p, q;
        cin >> p >> q;
        cout << Arr[p][q] << endl;
    }
 */

    int n, q, k, s, a, b;
    cin >> n >> q;
    int *seq[n];
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        seq[i] = new int[k];
        for (int j = 0; j < k; j++)
            cin >> seq[i][j];
    }
    while (q--)
    {
        cin >> a >> b;
        cout << seq[a][b] << endl;
    }

    return 0;
}

// Other solution of Code
/*
#include <iostream>
using namespace std;

int main()
{
    int **seq;

    int n, q;
    cin >> n >> q;
    seq = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        seq[i] = new int[k];
        for (int j = 0; j < k; ++j)
        {
            int x;
            cin >> x;
            seq[i][j] = x;
        }
    }
    for (int i = 0; i < q; ++i)
    {
        int a, b;
        cin >> a >> b;
        cout << seq[a][b] << endl;
    }

    return 0;
} */