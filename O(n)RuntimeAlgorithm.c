#include <stdio.h>
#include<stdlib.h>

int main() 
{
	int i,j,n;
	scanf("%d",&n);
	n++;
	int *A= malloc(n * sizeof(int));
	int *B= malloc(n * sizeof(int));

	for(i=1; i<n; i++)
	{
		scanf("%d",&A[i]);
		B[i]=i;
	}
	
int count=1;
int temp=0;
i=1,j=1;
int k=0;

	while(temp!=i && count!=n )
	{
	
		if(B[j]==0)
		{ 
			k++;
			i++;
			j++;
			continue;
		}
		
		temp=A[j];
		printf("%d ",j);
		B[j]=0;
		
		if(B[k]==0)
			k++;
		
		count++;
		j=A[j];
		
		if(temp==i)
		{
			i=k;
			j=i;
			printf("\n");	
		}
	}
    return 0;
}
