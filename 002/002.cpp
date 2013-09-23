#include <iostream>

using namespace std;

int fibonacci(int a, int b)
{
	return a + b;
}

int loop(int limit)
{
	int a = 1;
	int b = 2;
	int sum = 0;

	while(b < limit)
	{
		if(b % 2 == 0)
		{
			sum += b;
		}
		int help = fibonacci(a, b);
		a = b;
		b = help;
	}
	return sum;
}

int main()
{
	int limit = 4000000;
	cout << "Sum of all even numbers resulting from the Fibonacci sequence not extending " << limit << ": " << loop(limit) << endl;
}
