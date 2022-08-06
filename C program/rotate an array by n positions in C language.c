
int maim()
{
    int n,i,j,tamp;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        tamp=a[j];
        a[j]=a[i];
        a[i]=tamp;
    }
    for (i=0;i<n;i++)
    printf("%d ",a[i]);

}
