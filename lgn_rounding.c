#include<stdio.h>

int lgn_func(int num);
	int main()
	{
		double num2;
		int lgn_sonuc;
		scanf("%lf",&num2);
		
		
		if(num2>=1)
		{
			lgn_sonuc=lgn_func(num2);
		}
		
		if(num2<1 && num2>0)
		{
			int temp=1;
			int i;
				for(i=1; num2<1; i++)
				{
					num2=num2*10;
					temp=temp*10;	
				}
				double y;
				int x;
				y=temp/num2;
				x=(int)temp/num2;
				
				if(x!=y || num2==1)
				{
					lgn_sonuc=lgn_func(y);
					lgn_sonuc=(-1)*lgn_sonuc;
					lgn_sonuc--;
				}
				
				else if(x==y)
				{
					lgn_sonuc=lgn_func(y);
					lgn_sonuc=(-1)*lgn_sonuc;
				}			

		}
		
		printf("%d",lgn_sonuc);
		return 0;
	}
	int lgn_func(int num)
	{
	
		int sayac;
		for(sayac=0; num!=0 && num!=1; sayac++)
		{
			num=num/2; 
		}
	return sayac;
	}
