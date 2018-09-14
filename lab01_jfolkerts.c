//Justin Folkerts
//Lab 01
//This is a program that calculates the number of steps it takes to
//finish the Collatz conjecture from a certain starting point.

#include<stdio.h>

int const STARTINGPOINT = 1000;

int main(int argc, char* argv[])
{
	int i = 0;
	int COUNTER = 0;
	while(STARTINGPOINT != 1)
	{
		COUNTER = COUNTER + 1;
		if(STARTINGPOINT %% 2 == 1)
		{
			STARTINGPOINT * 3 + 1;
		}
		else if(STARTINGPOINT %% == 0)
		{
			STARTINGPOINT / 2;
		}
		else
		{
			printf(COUNTER);
		}
	}
}
