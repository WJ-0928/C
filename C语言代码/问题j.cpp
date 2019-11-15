#include <stdio.h>
#define P 3.1415926
int main()
{
    float r,h;
    float l,s,c,v;
    scanf("%f%f",&r,&h);
    l=2*r*P;s=r*r*P;
    c=l*h;v=s*h;
    printf("%.2f %.2f %.2f %.2f\n",l,s,c,v);
    return 0;
}
