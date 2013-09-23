#include <iostream>

using namespace std;

int divisible(int x, int a)
{
	if(x % a == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int loop(int x, int a, int b)
{
	int sum = 0;

	for(int i = 1; i < x ; i++)
	{
		int diva = divisible(i, a);
		int divb = divisible(i, b);

		if(diva == 1)
		{
			sum += i;
		}
		if(divb == 1 && diva == 0)
		{
			sum += i;
		}
	}
	return sum;
}

int main()
{
	int a = 5;
	int b = 3;
	int x1 = 10;
	int x2 = 1000;

	cout << "The sum of all numbers below " << x1 << " divisible by " << a << " and " << b << " is: " << loop(x1, a, b) << endl;
	cout << "The sum of all numbers below " << x2 << " divisible by " << a << " and " << b << " is: " << loop(x2, a, b) << endl;

	return 0;
}
