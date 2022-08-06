main ()
{
    int n,r,s,x;
    printf("Armstrong num \n");
    for(n=1;n<=100;n++)
    {
        s=0;
        x=n;
        while(x!=0)
        {
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if (s==n)
            printf("%d \n",n);
    }
}
