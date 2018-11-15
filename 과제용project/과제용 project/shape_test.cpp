#include <iostream>
#include "shape.h"
#include "client.h"
using namespace std;

int main()
{
	const int size = 5; //triangle 추가로 인한 4 -> 5 
	CShape	*shapes[size]; //

	// build shapes array
	shapes[0] = new CCircle();
	shapes[1] = new CCircle(2, 10, 20);
	shapes[2] = new CRect();
	shapes[3] = new CRect(3, 4, 30, 40); //cshape에서 x와 y의 역할이 뭐지?
	shapes[4] = new CTriangle(3, 4, 30, 40);
	// output shapes
	out_shapes(cout, shapes, size);
	// 1:0,0
	// 2:10,20
	// 1,1:0,0
	// 3,4:30,40

// compute total area

	cout << "total area = " << total_area(shapes, size) << endl;
	// total area = 28.7
	//변경 후 tatal area = 34.7 

	for (int i = 0; i < size; i++)
		delete shapes[i];

	return 0;
}
