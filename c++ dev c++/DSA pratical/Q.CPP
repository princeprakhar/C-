#include<stdio.h>
#include<conio.h>
#define qsz 5
int q[qsz],r=-1,f=-1;
void enq()
{
	int n;
	if(r==qsz-1)
	{
		printf("\nQ full");
	}
	else
	{
		printf("\nINSRT ELEM");
		scanf("%d",&n);
		q[++r]=n;
		if(f==-1)
		{
			f=0;
		}
	}
}
void dq()
{
	if(f==-1)
	{
		printf("\n q mpty");
	}
	else
	{
		printf("\ndeleted item=%d",q[f++]);
		if(f>r)
		{
			f=-1;
			r=-1;
		}

	}
}
void disp()
{
	int i;
	if(f==-1)
	{
		printf("\nQ mty");
	}
	else
	{
		printf("\n");
		for(i=f;i<=r;i++)
		{
			printf("\t%d",q[i]);
		}
	}
}
void main()
{
	int i=0,ch;
	clrscr();

	do
	{
		printf("\n\t to insrt press 1, del press 2, disp press 3");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enq();
				break;
			case 2:
				dq();
				break;
			case 3:
				disp();
				break;
			default:
				printf("Wrong ntry");

		}
		printf("\n\t to cont. press 1 else 0");
		scanf("%d",&i);
	}while(i);

}
