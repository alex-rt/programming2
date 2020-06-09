//PRACTICAL C PROGRAMMING EXERCISES
//Exercise 12-4: Write a program that lists all the planes that leave from two airports specified by the user.
#include <stdio.h>
#include <string.h>//this librarioe will allow us to compare to strings aplhabetically(strcmp(for the airport codes))

struct time {//structure to store time and date
	int day;//integer from1-31
	int month;//int from 1-12
	int year;//year number
	int hour;//int from 1-23
	int minutes;//int from 0-59
};

struct flight { //structure for flights information
	char flight_id[6];
	char departure[4];//3 characters for airports abbreviation
	char destination[4];
	struct time starting_time;//using the time struct to add startig and arrival time
	struct time arrival_time;  
};
struct flight flights[] = { //adding the data to our struct, 2 flights in this case(round trip)
	{
		"Y4757",//flight number
		"MID",//departure(airport abbreviation)
		"MEX",//Destination
		{//adding date and time(arrival)
			4,//day
			4,//month
			2020,//year
			14,//hours
			56//minutes
		},
		{//Adding date and time(departure)
			4,  
			4,   
			2020, 
			17,   
			3   
		},
	},
	{
		"Y4754",  
		"MEX",   
		"MID",   
		{         
			19,   
			4,    
			2020, 
			12,   
			24    
		},
		{         
			19,   
			4,    
			2020, 
			14,  
			16    
		},
	},
};

int flights_count = sizeof(flights)/sizeof(flights[0]);//finding out how many flights are there

void list_flights(char *airport_code) //Function to print all the information our struct has that match airport provided
{
	int i;//flights loop i 

	printf("*** Flights from %s ***\n\n", airport_code);
//printing all flights
	for (i=0; i<flights_count; i++) {
		//making sure that aiport codes match, if dont, skip, if theres a match, continue
		if (strcmp(flights[i].departure, airport_code) != 0)
			continue;
//printing flight info
		printf("* Flight *\n");
		printf("Flight: %s\n", flights[i].flight_id);
		printf("Departure airport: %s\n", flights[i].departure);
		printf("Destination airport: %s\n", flights[i].destination);
		printf("Starting time: %d-%d-%d %d:%d\n", flights[i].starting_time.day, flights[i].starting_time.month, flights[i].starting_time.year, flights[i].starting_time.hour, flights[i].starting_time.minutes);
		printf("Arrival time: %d-%d-%d %d:%d\n", flights[i].arrival_time.day, flights[i].arrival_time.month, flights[i].arrival_time.year, flights[i].arrival_time.hour, flights[i].arrival_time.minutes);

		printf("\n");
	}
}

int main()//main function to test run all code by asking user for input and executing out list_flights function
{
	char line[100];//input line 
	char first_airport_code[4];
	char second_airport_code[4];
//geting users input airports
	printf("Enter first airport(3 all-caps code): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%3s", first_airport_code);

	printf("Enter second airport(3 all-caps code): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%3s", second_airport_code);
//submitting the airports from user to our match-finding function
	list_flights(first_airport_code);
	list_flights(second_airport_code);

	return 0;
}

