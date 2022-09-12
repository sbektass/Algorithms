#include<stdio.h>
#include<stdlib.h>
	int main(){
		int num,count;
		scanf("%d",&num);
		int *array = malloc(num * sizeof(int));

		int i,j;
		
		
		for(i=0; count<num ; i++)
			array[i]=0;

	
		int s,b;
		for(s=1; s<=num;s++)
		{
			for(b=1; b<=num;b++)
			{
			
				if(b%s==0)
				{
					switch(array[b-1])
					{
		
						case 0:
							array[b-1]=1;
							break;
							
						case 1:
							array[b-1]=0;
							break;
					}		
				}
			}				
				
		}
				
		for(s=0; s<=num ; s++)
		{	if(array[s]==1)
				printf("%d ",s+1);
		}

return 0;
}
