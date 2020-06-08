//PRACTICAL C PROGRAMMING EXERCISE
//Exercise 12-1: Design a structure to hold the data for a mailing list. 
//Write a function to print out the data.
#include <stdio.h>

int main()
{
	int list_length;//mailing list length 
	int counter;//counter used to loop through all list entries 

	struct mailing {
		char first_name[20];
		char last_name[30];
		char gender[6];
		char email[40];
	};

	struct mailing list[] = {
		{
			"Alejandro",
			"Rodriguez",
			"Male",
			"alex.rtrillo@gmail.com"
		},
		{
			"Kanye",
			"West",
			"Male",
			"yeezus@gmail.com",
		},
	};

	list_length = sizeof(list) / sizeof(list[0]);

	for (counter = 0; counter < list_length; ++counter) { //printing all suscribers of the list
		printf("**Subsriber No. %d**\n", (counter + 1));
		printf("First name: %s\n", list[counter].first_name);
		printf("Last name: %s\n", list[counter].last_name);
		printf("Gender: %s\n", list[counter].gender);
		printf("Email: %s\n", list[counter].email);

		printf("\n");
	}

	return 0;
}