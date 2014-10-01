#pragma once
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
class ExampleInLine
{

public:

	ExampleInLine(void)
	{
	}

	~ExampleInLine(void)
	{
	}

	void InLineTestPrograme(void)
	{
		clock_t t;
		t = clock();
		unsigned int x;
		x = rand() << 2;
		cout << "Result" << x << "\n";
		// do some thing here
		t = clock() - t;
		cout << "In Line\n";
		cout << "no of ticks taken is" << t << "Time in secs" << (t/CLOCKS_PER_SEC) << '\n';
	}
	void Non_inLineTestPrograme();

};

