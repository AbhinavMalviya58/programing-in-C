main()
{
    add();
    Even();
    Hyphen();
}
add()
{
    int a,b,c;
    printf("Add Tow Numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum of %d\n",c);
}
Even()
{
    int a;
    printf("Check Even or odd Number\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even\n");
    else
        printf("odd\n");
}
Hyphen()
{
    int a,b,c;
    printf("Subtracton Tow Numbers\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("Subtracton is %d\n",c);
}
