#include<iostream>
#include<math.h>
#include<stdlib.h>
int compare(const void*a, const void* b)
{
    int A=*((int*)a);
    int B=*((int*)b);
    return (abs(A)-abs(B)); // for absolute value........
    return (A-B);
}
int main()
{
    int i, A[]={1,2,3,3,54,45,-3,-65,-23};
    int n=sizeof(A)/sizeof(A[0]);
    qsort(A,n,sizeof(int),compare);
    for(int i=0;i<n;i++)
    std::cout<<A[i]<<" ";
}