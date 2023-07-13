#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*

int fib(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n, num;
    cin >> n;
    cin.ignore();
    string ch;
    getline(cin, ch);

    for (int i = 0; i < n; i++)
    {
        int num = fib(i);
        while (num--)
        {
            cout << ch;
        }
        cout << endl;
    }
}
 */

int a = 1,
    b = 1, c, N, X;

int main()
{

    for (scanf("%d\n%c", &N, &X); N--; a = b, b = c)
    {
        for (int i = 0; i < a; i++)
            putchar(X);
        puts("");
        c = a + b;
    }

    return 0;
}