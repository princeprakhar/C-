#include<stdio.h>
void WaitingTime( int n, int bt[], int wt[])
{
 	wt[0] = 0;
 	for (int i = 1; i < n ; i++ )
 	wt[i] = bt[i-1] + wt[i-1] ;
}
void CompletionTime(int n, int bt[], int ct[])
{
 	ct[0]=bt[0];
 	for (int i=1; i<n; i++)
	 ct[i]=bt[i]+bt[i-1]+bt[i-2];
}
void ResponseTime( int n, int bt[], int rt[])
{
 	rt[0] = 0;
 	for (int i = 1; i < n ; i++ )
 	rt[i] = bt[i-1] + rt[i-1] ;
}
void TurnAroundTime( int n, int bt[], int wt[], int tat[])
{
 	for (int i = 0; i < n ; i++)
	tat[i] = bt[i] + wt[i];
}
void AvgTime( int processes[],int n, int bt[])
{
 	int wt[n], ct[n], rt[n], tat[n], total_wt = 0, total_tat = 0;
 	WaitingTime(n, bt, wt);
 	TurnAroundTime(n, bt, wt, tat);
 	CompletionTime(n, bt, ct);
 	ResponseTime(n, bt, rt);
 	printf("Process | BT | CT | TAT | WT | RT |\n");
 
 	for (int i=0; i<n; i++)
 	{
 		total_wt = total_wt + wt[i];
 		total_tat = total_tat + tat[i];
 		printf(" %d | %d | %d | %d | %d | %d\n",(i+1), bt[i], ct[i], tat[i], wt[i], rt[i]);
 	}
 	int s=(float)total_wt / (float)n; 
 	int t=(float)total_tat / (float)n;
 	printf("Average waiting time: %d\n",s);
 	printf("Average turn around time: %d\n",t);
}
int main()
{
 	 int processes[]={1,2,3,4,5};
	 int n = sizeof processes / sizeof processes[0];
	 printf("Enter the burst time for %d process: ",n);
	 int burst_time[n];
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&burst_time[i]);
	 }
	 AvgTime(processes, n, burst_time);
	 return 0;
}
