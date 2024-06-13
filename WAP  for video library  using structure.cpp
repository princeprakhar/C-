#include<stdio.h>
struct VidLib
{
	char title[50];
	char language[50];
	int year;
}vl;
int main()
{
	struct VidLib vl;
	printf("Enter the following video library information \n ");
	printf("Enter the Video title: ");
	gets(vl.title);
	printf("Enter the video language: ");
	gets(vl.language);
	printf("Enter the year: ");
	scanf("%d",&vl.year);
	printf("Moive Title: %s\nLanguage: %s\Year: %d",vl.title,vl.language,vl.year);
	return 0;
}
