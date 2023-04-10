for (int i = 0; i < n; i++)
    {
        // printf("p[%d]: ",i+1);
        // scanf("%d %d",&p[i].at,&p[i].bt);
        p[i].at = 1+ rand() % 10;
        p[i].bt = rand() % 10+1;
        p[i].pid = i + 1;
    }