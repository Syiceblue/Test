#include<stdio.h>    
int main()
{
    int i, n,sum=0,max=0;

    scanf("%d", &n);
    int arr[50];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }
        
    for (i=0;i<n;i++)
	{
        if(sum <= 0) 
        {
            sum = arr[i];
        }   
        else
        {
            sum = sum +arr[i];
        } 
           
        if(sum > max)
        {
            max = sum; 
        } 
              
    }
    printf("最大子段和为%d",max);
	return 0;
}