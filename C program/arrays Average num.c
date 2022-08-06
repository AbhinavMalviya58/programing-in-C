main()
{
int a[10],i,sum=0;
float avg;
printf("Enteer a 10 num\n ");
for (i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for (i=0;i<=9;i++)
    sum=sum+a[i];
    avg=sum/10.0;
printf("sum is %d \n",sum);
printf("Average is %f",avg);
getch();
}
