
#include<iostream>
using namespace std;

void printsum(int i, int n,int sum)
{
    static int call{1};
    if(i==n)
    { sum+=i;
    cout<<" Sum of Natural Numbers :"<<sum<<endl;
        return;
    }
    sum+=i;
    printsum(i+1,n,sum);

    call++;
    
    printf("%d 1\n",call);
    // printf("2\n");
    // printf("3\n");
    // printf("4\n");
    // printf("5\n");
}
int main()
{
    printsum(1,5,0);
}