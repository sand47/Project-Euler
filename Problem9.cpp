/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

By Sandeep ,2/4/17
*/
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	int s = 1000;
	bool found = false;
	for (a = 1; a < s / 3; a++) {
		for (b = a; b < s / 2; b++) {
			c = s - a - b;

			if (a * a + b * b == c * c) {
				found = true;
				cout << "Value of a " << a << "Value of b" << b << "Value of c " << c << "product " << a*b*c;
				system("Pause");
				break;
			}
		}

		if (found) {
			break;
		}
	}
    return 0;
}

