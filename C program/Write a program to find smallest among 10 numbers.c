
    main()
    {
        int a[5],i,min;
        printf("Enter a 5 number\n");
            for (i=0;i<=4;i++)
                scanf("%d",&a[i]);
            min=a[0];
                for(i=1;i<=4;i++)
                    if(min>a[i])
                    min=a[i];
         printf("Your Smallest num is %d",min);
    }
