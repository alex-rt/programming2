//PRCATICAL C PROGRAMMING EXERCISES
//Exercise 12-3: Design an airline reservation data structure that contains the following data:
//Flight number
//Originating airport code (three characters)
//Destination airport code (three characters)
//Starting time
//Arrival Time
#include <stdio.h>

struct time { //time structure will work for the arrival and departure times
	int day;     
	int month;   
	int year;    
	int hours;    
	int minutes; 
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

//void list_flights(void);

void list_flights(void)//function to print all info
{
	int i;//flights loop counter 

	printf("*** Flights ***\n\n");

	for (i= 0; i< flights_count; i++) {
		printf("**Flight No.%d**\n", (i + 1));
		printf("Flight: %s\n", flights[i].flight_id);
		printf("From: %s\n",flights[i].departure);
		printf("To: %s\n",flights[i].destination);
		printf("Starting time: %d-%d-%d %d:%d\n", flights[i].starting_time.day, flights[i].starting_time.month, flights[i].starting_time.year, flights[i].starting_time.hours, flights[i].starting_time.minutes);
		printf("Arrival time: %d-%d-%d %d:%d\n", flights[i].arrival_time.day, flights[i].arrival_time.month, flights[i].arrival_time.year, flights[i].arrival_time.hours, flights[i].arrival_time.minutes);

		printf("\n");
	}
}

int main()//main fucntion to test all previous code
{
	list_flights();

	return 0;
}
