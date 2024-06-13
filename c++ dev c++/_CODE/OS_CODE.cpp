#include<stdio.h>
#define max 30
int main()
{
    int i,count=0,n,t,sq=0,temp,qt,wt[max],tat[max],rem[max],bt[max];
    float awt=0,atat=0;
    printf("enter the number of process required:- ");
    scanf("%d",&n);
    printf("enter the burst time:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        rem[i]=bt[i];
        
    }
    
    printf("enter the time quantum:-");
    scanf("%d",&qt);
    do
    {
        for(i=0;i<n;i++)
        {
            temp=qt;
            if (rem[i]==0)
            {
                count++;
                continue;
            }
            if(rem[i]>0)
            {
                rem[i]=rem[i]-qt;
            }
            else
            {
                if(rem[i]>=0)
                {
                    temp=rem[i];
                    rem[i]=0;
                }
                sq=sq+temp;
                tat[i]=sq;
            }
         }
        
     }while(count!=n);
     wt[i]=bt[i]+tat[i];
     printf("process\t burst time\t waiting time\t turn around time\n");
     for(i=0;i<n;i++)
     {
         wt[i]=tat[i]-bt[i];
         awt=awt+wt[i];
         atat=atat+tat[i];
         printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
     }
    awt=awt/n;
    atat=atat/n;
    printf("The average waiting time:-%f\n",awt);
    printf("The average turn around time:-%f",atat);
}
