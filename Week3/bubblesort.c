#include<stdio.h>
void bubblesort(int a[50],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
             if(a[j]>a[j+1])
             {
                  t=a[j];
                  a[j]=a[j+1];
                  a[j+1]=t;
             }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubblesort(a,n);
    printf("after sorting\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}


