#include<stdio.h>
int main()
{
    char c[1000];
    printf("NAME:\npercentage:\ngrade\nphone no:\naddress");
    fgets(c,100,stdin);
    printf("NAME is %s,\npercentage:is %s,\ngrade is %s,\nphone no: is %s,\nadrees is %s",c);
    return 0;
}
