{
        printf("P%d:",i);
        scanf("%d",&b[i]);
        d[i]=i;
    }
    printf("Enter the priorities:\n");
    for(i=1;i<=n;i++)
    {
        for(i=1;i<=n;i++)
        {
            printf("P%d:",i);
            scanf("%d",&p[i]);
        }
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
            if(p[i]<p[j])
            {
                temp=p[i];
                t1=d[i];
                te=b[i];
                p[i]=p[j];
                d[i]=d[j];
                b[i]=b[j];
                p[j]=temp;
                d[j]=t1;
                b[j]=te;
            }
    printf("Gantt chart:");
    for(i=1;i<=n;i++)
        printf(" P %d\t",d[i]);
    printf("\n Process\t priority \t burst time \t waiting time \t turnaround time");
    for(i=1;i<=n;i++)
    {
        t=d[i];
        w[i+1]=w[i]+b[i];
        t2[i]=b[i]+w[i];
        t3+=t2[i];
        printf("\nP %d\t\t %d\t\t%d\t\t%d\t\t%d",d[i],p[i],b[i],w[i],t2[i]);
    }
    }
    temp=0;
    for(i=1;i<=r;i++)
        temp+=w[i];
    t=(float)temp/n;
    r=(float)t3/n;
    printf("\n Average waiting time:%.2f",t);
    printf("\n Averageturnaround time:%.2f",r);
