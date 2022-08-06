/*Takes Nothing,Returns Nothing*/

#include<stdio.h>
#include<conio.h>
void main()
{
    void add(void);
    add();
    getch();
}
void add()
{
    int a,b,c;
    printf("Add Tow Numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum of %d\n",c);
}
