#include<iostream>
using namespace std;

void zero_aaray(int numbers[],int size)
{
    for(size_t i{0};i<size;i++)
    numbers[i]=0;
}
void print_numbers(int numbers[],int size)
{
    for(size_t i{0}; i<size;i++)
    printf("%d",numbers[i]);
    // cout<<numbers[i];

}

int main()
{
    int my_number[] {1,2,3,4,5};
    zero_aaray(my_number,5);
    print_numbers(my_number,5);
}