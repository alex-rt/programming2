//PRACTICAL C PROGRAMMING EXERCISES
//Exercise 12-2: Design a structure to store time and date. 
//Write a function to find the difference between two times in minutes.
#include <stdio.h>

struct time {//structure to store time and date
	int day;//integer from1-31
	int month;//int from 1-12
	int year;//year number
	int hour;//int from 0-23
	int minutes;//int from 0-59
};

int timediff(struct time firsttime, struct time secondtime)//function to find the difference between two times in minutes.
{
	int firstminutes;//total number of minutes(1st time)
	int secondminutes;

	firstminutes = firsttime.minutes + (firsttime.hour * 60);//convertion of hours to mintes in adition to the minutes on the "times" time structure
	secondminutes = secondtime.minutes + (secondtime.hour * 60);
//how to always return a positive value
	if (firstminutes >= secondminutes) // if else consitional for doing the operation and finding the difference
		return firstminutes - secondminutes;
	else
		return secondminutes - firstminutes;
}

int main()//main funtion to use the struct and test the timediff function
{
	struct time times[] = {
		{
			3,//day
			8,//month
			2019,//year
			13,//hour
			22//minutes
		},
		{
			7,    
			6,    
			2020, 
			16,   
			2    
		}
	};
//printing the difference
	printf("Time difference is %d minutes\n", timediff(times[0], times[1]));//time difference should be 160 minutes

	return 0;
}
