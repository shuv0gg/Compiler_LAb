#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    scanf("%[^\n]",a);
    int i=strlen(a);
    for(int j=0;j<i;j++)
    {
        if (a[j]==' ' ||a[j]==','||a[j]==' , ')
            printf("\n");
        else
            printf("%c",a[j]);
    }


}
