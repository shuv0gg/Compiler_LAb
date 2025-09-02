#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int i,len,f=0;
    scanf("%s",a);
    len=strlen(a);
    printf("%d",len);
    for (i = 0; i < len/2; i++) {
        if (a[i] != a[len - i - 1]) {
            f = 1;
            break;
        }
    }
    if(f)
    {
        printf("\nNO");
    }
    else
    {
        printf("\nYES");
    }
}
