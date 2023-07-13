#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.) */
int main() {
    int x,y,z,k,num;
    vector<int> vec;
    cin>>x;
    for(int i=0;i<x;i++)
    {cin>>num;
    vec.push_back(num); }  
    
    cin>>y;
    vec.erase(vec.begin()+(y-1));
    cin>>z>>k;
    vec.erase(vec.begin()+(z-1),vec.begin()+(k)); 
    
    cout<<vec.size()<<endl;
    for(const auto &val:vec)
    cout<<val<<" ";
    
    return 0;
}
