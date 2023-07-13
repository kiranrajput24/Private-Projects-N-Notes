#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num;
    long l;
    char a;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&num,  &l,&a,&f,&d);
    printf("%d \n%Ld \n%c \n%0.3f \n%0.9lf",num,l,a,f,d);
    return 0;
}
