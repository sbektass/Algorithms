#include<stdio.h>

void function(int a, int b)
{
    int i,carpim=1;
	for(i=1; b!=0; i++)
	{
  		int i2;
  		
		for(i2=0; a%2==0 && b%2==0; i2++)
		{
			a=a/2;
			b=b/2;
			carpim=2*carpim;
			printf("a ");
		}

		for(i=1; a%2==0 && b%2!=0; i++)
		{
			a=a/2;
			printf("b ");
		}

		if(a>=b)
		{
			int temp=a;
			a=b;
			b=temp-b;
			printf("d ");
 		}
  
		if(b>a)
		{
			int temp2=a;
			a=b;
			b=temp2;
			printf("e ");

		}

		if(b==0)
		{
			printf("c ");  
			printf("%d",carpim*a);  
		}
    
	}
}
int main()
{
    int a,b,i,carpim=1;
    scanf("%d%d",&a,&b);
    function(a,b);   
    return 0;
}


