#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c;
    int count=0;
    float area,s;
    printf("enter the value of a=");
    scanf("%f",&a);
    printf("enter the value of b=");
    scanf("%f",&b);
    printf("enter the value of c=");
    scanf("%f",&c);
    s=(a+b+c)/2;
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        printf("find the triangle area is possible\n");
        count++;
    }
    else
        printf("triangle area is not possible\n");

    if(count>0)
    {
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("the area is=%f",area);
    }
    getch();

}

