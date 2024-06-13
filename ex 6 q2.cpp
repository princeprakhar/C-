#include<stdio.h>

#include<string.h>

int main()

{

   int x,y,i,j;

   char str1[30];

   char str2[30];

   char str3[30]={};

   printf("Enter string 1: \n");

   gets(str1);

   printf("Enter string 2: \n");

   gets(str2);

 

   while(1)

   {

       printf("\n 1. String length\n 2. String Copy\n 3. String Comparison \n 4. String Concatenation \n 5. Reverse \n 6. Exit");

       printf("\nEnter the operation you wish to perform (1-6)\n");

       scanf("%d",&x);

       switch(x)

       {

           case 1: i=0;

                   while(str1[i]!='\0')

                   {

                       i++;

                   }

                   printf("\nLength of the string 1 is %d.\n",i);

                   break;

           case 2: i=0;

                   while(str1[i]!='\0')

                   {

                       str3[i]=str1[i];

                       i++;

                   }

                   str3[i+1]='\0';

                   printf("\nCopied string of string 1 is %s.\n",str3);

                   break;

               case 3: i=0,y=0;

                   while(str1[i]!='\0'||str2[i]!='\0')

                   {

                       if(str2[i]!=str1[i])

                       {

                           y=1;

                           break;

                       }

                       i++;

                   }

                   if(y!=1)

                       printf("The strings are same.\n");

                   else

                       printf("The strings are different.\n");

                   break;

           case 4: i=0,j=0;

                   while(str1[i]!='\0')

                   {

                       i++;

                   }

                   while(str2[j]!='\0')                  // i gives the length of str1.

                   {

                       str1[i+j]=str2[j];

                       j++;

                   }

                   str1[i+j]='\0';

                   printf("\nConcatenated string 1 after concatenation is %s.\n",str1);

                   break;

           case 5: i=0;j=0;

                   while(str1[i]!='\0')

                   {

                       i++;

                   }

                   printf("\nReversed string 1 is:\n");

                   for(j=i-1;j>=0;j--)

                   printf("%c",str1[j]);

                   break;

           case 6: return 0;

           default: printf("You entered an invalid option.\n");

       }

   }

}

