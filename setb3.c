/*3.Write a program that reverses the order of the bits in an unsigned int value. The program should
input the value from the user and call function reverseBits to print the bits in reverse order. Print the
value in bits both before and after the bits are reversed to confirm that the bits are reversed properly.*/









#include<stdio.h>
void main()
{
	int num,n,q;
	int a[10];
	printf("Enter a number\n");
	scanf("%d",&num);
	
	for(q=0;num>0;q++)
	{
		a[q] = num%2;
		num = num/2;
	}
	n = q;
	printf("Before\n");
	for(q=n-1;q>=0;q--)
	{
		printf("%d",a[q]);
	}
	printf("\nAfter\n");
	for(q=0;q<n;q++)
	{
		printf("%d",a[q]);
	}
}
