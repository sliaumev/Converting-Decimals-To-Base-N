//Velasco, Sophia Liaume N.
#include<stdio.h>
int num,base,rem,i,ctr,dnum,dbase,ctr1;
char inp[100];
int main()
{
	printf("Input number: ");
	scanf("%d", &num);
	do
	{
		printf("Input base: ");
		scanf("%d", &base);
	}
	while(base<2 || base>36); //Getting the valid inputs.
	
	dbase = base;
	dnum = num;

	if(dnum==0)
	{
		ctr = 1;
	}
	else
	{
		while(dnum!=0)
		{
			rem = dnum%dbase;
			dnum = dnum/dbase;
			ctr = ctr + 1;
		}	
	}	
 	inp[ctr]; //Declaring the size of the array for the loop

	for(i=0;i<ctr;i++)
		{
			rem = num%base;
			num = num/base;	
			if(rem<=9)
			{
				rem = rem + 48;
			}
			else
			{
				rem = rem + 55;
			}
			inp[i] = rem;
		}	//Populating the character array.
		
	printf("Converted: ");
	for(i=ctr-1;i>=0;i--)
	{
		printf("%c", inp[i]);
	}
}