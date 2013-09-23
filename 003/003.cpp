#include <cmath>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double n = 600851475143;
	ifstream f;
	string s;
	int value = 0;

	f.open("prime.txt", ios::in);
	while(!f.eof())
	{
		getline(f, s);
		value = atof(s.c_str());
		if(fmod(n, value) == 0)
		{
			cout << value << endl;
		}
	}

	f.close();

	return 0;
}
