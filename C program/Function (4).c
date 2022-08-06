/*Takes Nothing,Returns something*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int s;
    s=add();
    printf("Sum is %d",s);
    getch();
}
int add()
{
    int a,b,c;
    printf("Add Tow Numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
}
