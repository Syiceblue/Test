#include<stdio.h>    
int main()
{
    int i, n,sum=0,max=0;

    scanf("%d", &n);
    int a[50];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); 
    }
        
    for (i=0;i<n;i++)
	{
        if(sum <= 0) 
        {
            sum = a[i];
        }   
        else
        {
            sum = sum +a[i];
        } 
           
        if(sum > max)
        {
            max = sum; 
        } 
              
    }
    printf("最大子段和为%d",max);
	return 0;
}