#include <stdio.h>
#include<stdlib.h>


void findlis(int A[], int n)
{
	int i,j;
	int maxLength=0;
	int maxFinish=0;
	int currentLength=0;
	
	for(i=0; i<n; i++)
	{
	
		if(A[i] < A[i+1])
		{
			currentLength++;
		}
		
		else
		{	
			if(currentLength>maxLength)
			{
				maxLength=currentLength;
				currentLength=0;
				maxFinish=i;
			} 
			
			else
			{
				currentLength=0;

			} 
		}
	}
		
		int x,y;
		x=maxFinish-maxLength;
		y=maxFinish;
		for(j=x; j<=y; j++)
		{
			printf("%d ", A[x]);
			x++;
		}

}

int main() {


	int i,n;
	scanf("%d",&n);
	int *A= malloc(n * sizeof(int));

	for(i=0; i<n; i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=0; i<n-1; i++)
	{
		A[i]=A[i+1]-A[i];
	}
	A[i]=A[i-1]-1;	
	
	findlis(A,n);
return 0;
}
