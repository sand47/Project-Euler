// Problem3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <math.h>
#include <cstdint> 

using namespace std;

int main()
{

	
	int largest=0 ;
	int count;

	
	uint64_t num = 600851475143;

	for (int factor = 1; factor <= num; factor++)
	{
		if (num % factor == 0)
		{
			count = 0;
			for (int primetest = 2; count == 0 && factor > primetest; primetest++)
			{
				if (factor % primetest == 0)
					count++;
				//endif
			}
			if (count == 0)
				largest = factor;
			//endif
		}

	}//endif
	cout << largest << endl;
	system("PAUSE");
}