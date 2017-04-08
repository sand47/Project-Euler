/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

By Sandeep , 1/4/17
*/
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
