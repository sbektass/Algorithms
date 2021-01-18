#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int MaxKar(int P[],int b,int s)
{
  if(s<=b)
    return 0;
  int i,j;
  int Kar=0, yeni_kar=0;
  for(i=b;i<s;i++)
  {
    for(j=i+1; j<s;j++)
    {
      if(P[j]>P[i])
      {
        yeni_kar=P[j]-P[i]+MaxKar(P,b,i-1)+MaxKar(P,j+1,s);

        if(yeni_kar>Kar)
          Kar=yeni_kar;
      }
    }
  }
   return Kar;
}

int main() 
{ 
    int P[1000]; 
    int length=0;
    char *temp;  
    char input[1000]; 

    fgets(input,1000,stdin); 
    temp=strtok(input, ","); 
    while(temp!=NULL) 
    { 
        P[length]=atoi(temp); 
        temp=strtok(NULL, ",");
        length++;  
    } 
    int kar=MaxKar(P,0,length);
    printf("%d",kar);
return 0;
}