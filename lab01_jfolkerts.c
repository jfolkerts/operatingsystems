//Justin Folkerts
//Lab 01
//This is a program that calculates the number of steps it takes to
//finish the Collatz conjecture from a certain starting point.

#include<stdio.h>

int STARTINGPOINT = 1000;
int COUNTER = 0;

int main(int argc, char* argv[])
{

	while(STARTINGPOINT != 1)
	{

		if(STARTINGPOINT % 2 == 1)
		{
			STARTINGPOINT = STARTINGPOINT * 3 + 1;
		}
		else
		{
			STARTINGPOINT = STARTINGPOINT / 2;
		}
		COUNTER++;
	}

	printf("%d",COUNTER);
	return 0;
}
