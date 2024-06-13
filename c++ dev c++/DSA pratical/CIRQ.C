#include<stdio.h>
#include<conio.h>
#define sz 5
int r=-1,f=-1,q[sz],count=0;
void enq()
{
	int n;
	if((r+1)%sz==f)
	{
		printf("Q full");
	}
	else
	{
		printf("\nNtr val\n");
		scanf("%d",&n);
		r=(r+1)%sz;
		q[r]=n;
		count++;
		if(f==-1)
		{
			f=0;
		}

	}
}
void dq()
{
	if(r==-1)
	{
		printf("Q empty");
	}
	else
	{
		printf("Deleted item=%d",q[f]);
		f=(f+1)%sz;
		count--;
		if(count==0)
		{
			r=-1;
			f=-1;
		}
	}
}
void show()
{
	int i;
	if(r==-1)
	{
		printf("\nQ mt");
	}
	else
	{
		for(i=f;i!=r;i=(i+1)%sz)
		{
			printf("\n\t%d",q[i]);
		}
		printf("\n\t%d",q[r]);
	}
}
void main()
{
	int i,ch;
	clrscr();

	do
	{
		printf("\n\tTo nq press 1,dq press 2, disp press 3");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: enq();
			break;
			case 2:
				dq();
				break;
			case 3:
				show();
				break;
			default:
			printf("Wrong entry");
		}
		printf("\nPress 1 to cont. 0 to exit");
		scanf("%d",&ch);

	}while(ch!=0);
}