// amstrong number or not 
#include<stdio.h>
#include<math.h> 
int main()
{
	int n , sum=0 , cube , i  ;
	printf("Enter the number : ");
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		cube=pow(i,3);
		sum=sum+cube;
	}
	
	if(sum==n)
	{
		printf("%d is amstrong ", n);
	
    }
}
