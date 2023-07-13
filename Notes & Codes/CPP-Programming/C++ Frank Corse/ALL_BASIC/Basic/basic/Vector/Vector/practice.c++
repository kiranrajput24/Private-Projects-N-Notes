#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> vector1;
    vector <int> vector2;
    vector <vector<int>> vector_2d;
    int num1,num2;
    cout<<"\nEnter two numbers for Vector1 : \n";
    cin>>num1>>num2;
    vector1.push_back(num1);
    vector1.push_back(num2);
    cout<<"Vector1's Elemets are :\n"<<vector1.at(0)<<endl<<vector1.at(1)<<endl;
    cout<<"Size of Vector1 : "<<vector1.size();

    cout<<"\nEnter two numbers for vector2 ;\n";
    cin>>num1>>num2;
    vector2.push_back(num1);
    vector2.push_back(num2);
    cout<<"\nVector2's Elemments are : \n"<<vector2.at(0)<<endl<<vector2.at(1)<<endl;
    cout<<"Size of Vector2 : "<<vector2.size();


    cout<<"__________________________________2D Vector___________________________________________";
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"Vector 2D elements are : \n";
    cout<<"vector 2D Elements :\n "<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<" "<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    cout<<"Size of 2D Vector : "<<vector_2d.size()<<endl;
    vector1.at(0)=1000;
    cout<<"vector 2D Elements :\n "<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<" "<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    cout<<"Vector1's Elemets are :\n"<<vector1.at(0)<<endl<<vector1.at(1)<<endl;


}