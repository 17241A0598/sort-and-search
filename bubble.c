#include <stdio.h>
int main()
{
int a[30];
int n,flag;
int temp;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
        }
        if(flag==0)
        break;
    }
} printf("The Elements are :-");
for(int i=0;i<n;i++)
{
    printf(" %d ",a[i]);
}
    return 0;
}
