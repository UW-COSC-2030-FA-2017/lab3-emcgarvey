//Ethan McGarvey
//9/29/17
//COSC 2030
//Lab 3
#include<iostream>
using namespace std;
int main()
{
	short n1 = 0;
	short r1 = 0;
	while (n1 >= 0) 
	{
		cout << "Type short. Enter an 'n'value (-1 to stop): ";
		cin >> n1;
		if (n1 <= 0)
		{
			break;
		}
		for (int i = 1; i < n1+1; i++)
		{
			r1 += i;
		}
		cout << "n = " << n1 << endl;
		cout << "sum = " << r1 << endl;
		n1 = 0; 
		r1 = 0;
	} 
	long n2 = 0;
	long r2 = 0;
	while (n2 >= 0)
	{
		cout << "Type long. Enter an 'n'value (-1 to stop): ";
		cin >> n2;
		if (n2 <= 0)
		{
			break;
		}
		for (int i = 1; i < n2+1; i++)
		{
			r2 += i;
		}
		cout << "n = " << n2 << endl;
		cout << "sum = " << r2 << endl;
		n2 = 0;
		r2 = 0;
	}
	double n3 = 0;
	double r3 = 1;
	while (n3 >= 0)
	{
		cout << "Factorial. Enter an 'n'value (-1 to stop): ";
		cin >> n3;
		if (n3 <= 0)
		{
			break;
		}
		for (int i = 1; i < n3 + 1; i++)
		{
			r3 = r3*i;
		}
		cout << "n = " << n3 << endl;
		cout << n3 << "! = " << r3 << endl;
		n3 = 0;
		r3 = 1;
	}
	// Type long/float: n = 35 causes an overflow. Detected by 'inf'
	// Type double/double: n = 171 causes an overvlow. Detected by 'ínf'
	float n4 = 0;
	float r4 = 0;
	while (n4 >= 0)
	{
		cout << "Summation 1/n. Enter an 'n'value (-1 to stop): ";
		cin >> n4;
		if (n4 <= 0)
		{
			break;
		}
		for (int i = 0; i < n4; i++)
		{
			r4 += (1 / n4);
		}
		r4  -= 1.0;
		cout << "n = " << n4 << endl;
		cout << "sum = " << r4 << endl;
		n4 = 0;
		r4 = 0;
	}
	//Ideally, 1/n summed n times would be equal to 1 mathematically, so the result should always be 0. But, because of the way float and doubles are stored in C++, the sum is not exactly equal to 1, which creates the strange behavior as n becomes larger.
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	// float: it prints out 4.4 when its not supposed to because the actual value of i after what should have been the last iteration may have been about 4.399999, which is less than 4.4, so it rounded it and printed it.
	// double: the loop iterates the correct number of times.
}

