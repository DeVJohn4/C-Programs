#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter the number for stars:");
scanf("%d",&n);
for(i=1;i<=n;i++)
        {
        printf("\n");
        for(j=5;j<=i;j--)
        printf("*\t");
        }
printf("\n");
return 0;
}
