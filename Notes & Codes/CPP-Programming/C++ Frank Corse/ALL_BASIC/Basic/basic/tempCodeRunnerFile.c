#include<stdio.h>
#include<stdlib.h>
struct rectangle
{
    int length;
    int breath;
};
void initilize (struct rectangle *r1,int l,int b)
{
    r1->length=l;
    r1->breath=b;
}
int area(struct rectangle r)
{
    return ((r->length)*(r->breath));
}
void changelenth(struct rectangle *r,int l)
{
    r->length=l;
}
int main()
{
    struct rectangle r;
    initilize(&r,10,20);
    area(r);
    changelenth(&r,30);
}