//Exercise 13-1: 
//Write a program that uses pointers to set each element of an array to zero.
#include <stdio.h>

int main()
{
	int array[5] = {};//declaring the array (sing just 5 numbers in this case)
	int i;//variable to scan input and print output
	printf("Enter 5 elements: ");
    for (i=0; i<5; i++)
        scanf("%d", array+i);//getting elements from user
	int *array_ptr;//pointer to numbers array

	for (array_ptr=&array[0]; array_ptr<&array[5]; array_ptr++){//loop goes trough all elements
		*array_ptr = 0;//turning them into 0
	}

	for (i=0; i<5; i++){//printing the transformation to user
		printf("Number[%d] = %d\n", i, array[i]);
	}

	return 0;
}
