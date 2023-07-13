#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int x;
    cin >> x;
    cin.ignore();
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int f;
#include <iostream>
        using namespace std;
        main()
        {
            int n;
            cin >> n;
            cin.ignore();
            string s(500, ' '), cur, t;
            getline(cin, t);
            t.push_back(',');
            for (char c : t)
                if (islower(c) || isupper(c))
                    cur.push_back(c);
                else if (!cur.empty())
                {
                    if (cur.size() < s.size())
                        s = cur;
                    cur.clear();
                }
            cout << s << endl;
        }
        int t;
        string category;
        cin >> f >> t >> category;
        cin.ignore();
        if (f > 0 && t > 0)
            cout << "positive\n";
        if (f == 0 && t == 0)
            cout << "null\n";
        if (f < 0 && t < 0)
            cout << "positive\n";
    }
}