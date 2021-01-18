#include <stdio.h>
#include<stdlib.h>

int main() 
{
	int i,size;
	scanf("%d",&size);
	int *A = malloc(size * sizeof(int));
	int *B = malloc(size * sizeof(int)); 
	int *S = malloc(size * sizeof(int));
	int *result = malloc(size * sizeof(int));
	
	for(i=0; i<size; i++)
	{
		scanf("%d",&A[i]);
		S[i]=1;
		B[i]=1;
		result[i]=1;
	}
 
		for(i=1; i<size; i++)
			result[0]=result[0]*A[i];
		
		printf("%d ",result[0]);
	
		for (i=1; i<size-1; i++)
		{
			B[i] = A[i-1]*B[i-1];
			//printf("%d \n",B[i]);
		}
				
		for (i=size-2; i>=1; i--)
		{
			S[i] = A[i+1]*S[i+1];
			//printf("%d \n",S[i]);
		}

		for (i=1; i<size-1; i++)
			result[i] = S[i]*B[i];

		for (i=0; i<size-1; i++)
			result[size-1]*=A[i];
		
		for (i=1; i<size; i++)
			printf("%d ",result[i]);	
    return 0;
}
