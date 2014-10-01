#include "ExampleInLine.h"

void  ExampleInLine::Non_inLineTestPrograme()
{
	clock_t t;
	t = clock();
	// do some thing here
			unsigned int x;
		x = rand() << 2;
		cout << "Result" << x << "\n";
	t = clock() - t;
	cout << "\n Non In line";
	cout << "no of ticks taken is " << t << "Time in secs" << (t/CLOCKS_PER_SEC);
}