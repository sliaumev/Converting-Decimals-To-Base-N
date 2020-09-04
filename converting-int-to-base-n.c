// Velasco, Sophia Liaume N.
// University of the Philippines Mindanao
/* This program is designed to take an integer of base 10 and convert it to any base from 2 to 36.
This program uses a duplicate variable since repeatedly dividing a number exhausts it to zero. */

#include<stdio.h>
int num,base,rem,i,ctr,dnum,dbase,ctr1;		// Declare int variables

/*
	num - this is where the number to be converted will be stored.
	base - this is where we'll store the desired base [2, 36]
	rem - this will store the remainder everytime we divide num by the base.
	i - 
	ctr - 
	dnum -
	dbase - 
	ctr1 - 
*/

char inp[100];		// Create a char array for 99 characters.
int main()
{
	printf("Input number: ");		// Prompt the user for a number.
	scanf("%d", &num);		// Store the number to be converted in the variable num.
	do
	{
		printf("Input base: ");
		scanf("%d", &base);
	}
	while(base<2 || base>36); 		// Checking whether the inputted base is valid.
	
	dbase = base;		// Duplicating the desired base.
	dnum = num;		// Duplicating the number to be converted.

	if(dnum==0)
	{
		ctr = 1;		// If the number is equal to zero autmatically set the counter to 1.
	}
	else
	{
		/* Keep repeating the process of dividing the number by the desired base 
		*/
		while(dnum!=0)						
		{
			rem = dnum%dbase;				
			dnum = dnum/dbase;
			ctr = ctr + 1;
		}	
	}	
 	inp[ctr];		//Declaring the size of the array for the loop

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
