#include <iostream>
#include "shape.h"
#include "client.h"
using namespace std;

// output shapes
void out_shapes(ostream &sout, CShape *shapes[], int size)
{
	for (int i = 0; i < size; i++)
	{
		shapes[i]->out(sout); sout << endl;
	}
}

// return total area
double total_area(CShape *shapes[], int size)
{
	double sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += shapes[i]->area();
	}
	return sum;
}

