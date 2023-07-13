#include <iostream>
#include <vector>
using namespace std;

void getter_vec_elem(vector<pair<int, int>> &v,int size)
{
    int x,y;
    for (int i{}; i < size; ++i)
    {
        cout << "Enter Elememnts of pair of the vector :"<<endl;
        cin>>x>>y;
        // v.push_back({x,y});
        v.push_back(make_pair(x,y));

    }
}

void print_vector(vector<pair<int, int>> const &v)
{
    cout<<endl<<"All pair elements "<<endl<<endl;
    for (int i{}; i < v.size(); ++i)
        cout << v[i].first << " " << v[i].second << endl;
    cout<<endl;
}

int main()
{
    vector<pair<int, int>> v;
    int size;     
    cout<<"Enter Vector pair size :";
    cin>>size;
    getter_vec_elem(v,size);
    print_vector(v);
}