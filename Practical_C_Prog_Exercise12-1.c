//PRACTICAL C PROGRAMMING EXERCISE
//Exercise 12-1: Design a structure to hold the data for a mailing list. 
//Write a function to print out the data.
#include <stdio.h>

int main()
{
	int listlen;//mailing list length 
	int i;//counter used to loop through all list entries 

	struct mailing {//mailing struct to hold all the data
		char firstname[20];
		char lastname[30];
		char gender[6];
		char email[40];
	};

	struct mailing list[]={//doing the list of subscribers, 3 in this case
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
		{
			"Frank",
			"Ocean",
			"Male",
			"blonded@gmail.com",
		},
	};

	listlen=sizeof(list)/sizeof(list[0]);//finding how many subscribers are there

	for(i=0;i<listlen;i++){//printing all suscribers of the list
		printf("***Subsriber No.%d***\n", (i+1));
		printf("First name:%s\n", list[i].firstname);
		printf("Last name:%s\n", list[i].lastname);
		printf("Gender:%s\n", list[i].gender);
		printf("Email:%s\n", list[i].email);

		printf("\n");
	}

	return 0;
}
