// Problem9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
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

