#include <stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	int *A= malloc(n * sizeof(int));
	
	for(i=0; i<n; i++)
		scanf("%d",&A[i]);

	int temp=1;

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
				if(i==j && i!= n-1 && j!=n-1)
				j++;
				
				if(i!=j)
				temp=temp*A[j];
		}
		printf("%d ", temp);
		temp=1;				
	}
	
    return 0;
}
