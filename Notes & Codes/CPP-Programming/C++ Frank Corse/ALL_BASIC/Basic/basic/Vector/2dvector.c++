#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> ratings 
    {
        {1,1,2},
        {2,3,4},
        {6,7,8}
    };
    cout<<"Vector : "<<ratings.at(0).at(2);
}