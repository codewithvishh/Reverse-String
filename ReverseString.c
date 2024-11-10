#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter a Character:");
    scanf("%s",a);
    int l;
    for(l=0;a[l]!='\0';l++);
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}