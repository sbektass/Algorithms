#include <stdio.h>
#include <stdlib.h>

void swap(int *j, int *j2) 
{ 
    int temp=*j; 
    *j=*j2; 
    *j2=temp; 
} 

int main()
{
    int *G=(int*)malloc(10*sizeof(int));
    int *S1=(int*)malloc(10*sizeof(int));
    int *S2=(int*)malloc(10*sizeof(int));

    int *first_digit=(int*)malloc(10*sizeof(int));
    int *second_digit=(int*)malloc(10*sizeof(int));
    int *third_digit=(int*)malloc(10*sizeof(int));

    int i,j,temp;

    for(i=0; i<10; i++)
    {
	scanf("%d",&G[i]);
        S1[i]=G[i];
        S2[i]=G[i];
    }

    for(i=0;i<10;i++)
    {
        first_digit[i]=S1[i]/100;
        second_digit[i]=(S1[i]/10)%10;
        third_digit[i]=S1[i]%10;
    }

    for(i=0; i<9; i++)
    {
        for(j=0; j<9-i; j++)
        {
            if(third_digit[j]>third_digit[j+1])
            {
                swap(&S1[j],&S1[j+1]);
                swap(&third_digit[j],&third_digit[j+1]);
                swap(&first_digit[j],&first_digit[j+1]);
                swap(&second_digit[j],&second_digit[j+1]);
            }
        }
    }

    for(i=0; i<9; i++)
    {
        for(j=0; j<9-i; j++)
        {
            if(second_digit[j]>second_digit[j+1])
            {
                swap(&S1[j],&S1[j+1]);
                swap(&first_digit[j],&first_digit[j+1]);
                swap(&second_digit[j],&second_digit[j+1]);
            }
        }
    }

    for(i=0; i<9; i++)
    {
        for(j=0; j<9-i; j++)
        {
            if(first_digit[j]>first_digit[j+1])
            {
                swap(&S1[j],&S1[j+1]);
                swap(&first_digit[j],&first_digit[j+1]);
            }
        }
    }

    for(i=0;i<10;i++)
    {
        first_digit[i]=S2[i]/100;
        second_digit[i]=(S2[i]/10)%10;
        third_digit[i]=S2[i]%10;
    }

    for(i=0; i<9; i++)
    {
        for(j=0; j<9-i; j++)
        {
            if(first_digit[j]>first_digit[j+1])
            {
                swap(&S2[j],&S2[j+1]);
                swap(&first_digit[j],&first_digit[j+1]);
                swap(&second_digit[j],&second_digit[j+1]);
                swap(&third_digit[j],&third_digit[j+1]); 
            }
        }
    }

    for(i=0; i<9; i++)
    {
        for(j=0; j<9-i; j++)
        {
            if(second_digit[j]>second_digit[j+1])
            {
                swap(&S2[j],&S2[j+1]);
                swap(&third_digit[j],&third_digit[j+1]);
                swap(&second_digit[j],&second_digit[j+1]);
            }
        }
    }

    for(i=0; i<9; i++)
    {
        for(j=0; j<9-i; j++)
        {
            if(third_digit[j]>third_digit[j+1])
            {
                swap(&S2[j],&S2[j+1]);
                swap(&third_digit[j],&third_digit[j+1]);  
            }
        }
    }
    
    for (i=0; i<10; ++i)
    	printf("%d  ", S1[i]);
    printf("\n");
    
    for (i=0; i<10; ++i)
    	printf("%d  ", S2[i]);
    printf("\n");

    int m=0;
    for(i=0; i<10; i++)
        if(S1[i]!=S2[i])
            m++;
    m*=10;
    printf("%%%d hata",m);

return 0;
}
