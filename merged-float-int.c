//Velasco, Sophia Liaume N.
#include<stdio.h>
#include<math.h>
int fig();
int base,num1,i,rem,dbase,dnum1,ctr;
double num0;
char inp[100], dec[10];

int main(){
	printf("Enter number: ");
	scanf("%lf", &num0);
	do
	{
		printf("Enter base: ");
		scanf("%d", &base);
	}
	while(base<2 || base>36); //Getting the valid inputs.

	num1 = floor(num0);//Identifying the whole number.
	num0 = num0 - num1; //Extracting the decimal part
	
//Working on the integer part.
	dbase = base;
	dnum1 = num1;//Duplicating the values to not exhasut them during the process of determining the counter for the index of the array.
//Counting index needed for the array.
	if(dnum1==0)
	{
		ctr = 1; 
	}
	else
	{
		while(dnum1!=0)
		{
			rem = dnum1%dbase;
			dnum1 = dnum1/dbase;
			ctr = ctr + 1;
		}	
	}	
 	inp[ctr]; //Declaring the size of the array for the loop
/*----------------------------------------------------------------*/	
	for(i=0;i<ctr;i++)
		{
			rem = num1%base;
			num1 = num1/base;	
			rem = fig(rem);
			inp[i] = rem;
		}	//Populating the character array.
		
	printf("Converted: ");
	for(i=ctr-1;i>=0;i--)
	{
		printf("%c", inp[i]);
	}
	if(num0>0)
	{
		printf(".");
		//By this point we can be sure that we're only working on the decimal part.
		for(i=0;i<8;i++)
		{
			num0 = num0 * base;
			rem = floor(num0);
			num0 = num0 - rem;
			rem = fig(rem);
			dec[i] = rem; //Storing the values in the array.	
			printf("%c", dec[i]);
		}
	}			
}
int fig(int a)
{
	if(a<=9)
		{
			a= a + 48;
		}
		else
		{
			a = a + 55;
		}
	return a;
}