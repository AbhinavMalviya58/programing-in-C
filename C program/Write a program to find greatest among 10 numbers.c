
    main()
    {
        int a[5],i,max;
        printf("Enter a 5 number\n");
            for (i=0;i<=4;i++)
                scanf("%d",&a[i]);
            max=a[0];
                for(i=1;i<=4;i++)
                    if(max<a[i])
                    max=a[i];
         printf("Your greatest num is %d",max);
    }
