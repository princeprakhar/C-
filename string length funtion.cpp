#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	char str[20],b[20],str1[20],str2[5];
	
	gets(str);
	puts(str);
	a=strlen(str);
	printf("%d",a);
	b[10]=strrev(str);
	gets(b);
	strlwr(str);
	printf("%s",str);
	strupr(str);
	printf("%s",str);
	strcpy(str,str1);
	puts(str1);
	strcat(str1,str2);
	puts(str1);
	strcmp(str1,str);
	return 0;
}
