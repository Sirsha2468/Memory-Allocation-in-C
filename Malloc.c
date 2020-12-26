#include<stdio.h>
#include<stdlib.h>
# define NULL 0

main()
{
	int *p,*table;
	int size;
	printf("\nWhat is the size of the table?");
	scanf("%d",&size);
	printf("\n ");
	/*Memory Allocation*/
	if((table = (int*)malloc(size *sizeof(int))) == NULL)
	{
		printf("\nNo space available\n");
		exit(1);
	}
	printf("Address of the 1st byte is:%u\n",table);
	/*reading table values*/
	printf("\nInput table value:\n");
	
	for(p=table;p<table + size; p++)
		scanf("%d",p);
		/*Printing value in reverse order*/
		for(p=table + size -1; p>=table; p--)
		printf("%d is stored at the addresss %u \n",*p,p);
	
}
