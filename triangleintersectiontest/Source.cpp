#include<iostream>
#include "Intersection.h"

using namespace std;


int main() {
	float x11, x12, x13, y11, y12, y13, z11, z12, z13, x21, x22, x23, y21, y22, y23, z21, z22, z23;
	cout << "input the first tirangle first vertex\n";
	cin >> x11 >> y11 >> z11;
	cout << "input the first tirangle second vertex\n";
	cin >> x12 >> y12 >> z12;
	cout << "input the first tirangle third vertex\n";
	cin >> x13 >> y13 >> z13;
	cout << "input the second tirangle first vertex\n";
	cin >> x21 >> y21 >> z21;
	cout << "input the second tirangle second vertex\n";
	cin >> x22 >> y22 >> z22;
	cout << "input the second tirangle third vertex\n";
	cin >> x23 >> y23 >> z23;

	Triangle tri1 = Triangle{
		{x11,y11,z11},
		{x12,y12,z12},
		{x13,y13,z13}
	};
	Triangle tri2 = Triangle{

		{x21,y21,z21 },
		{x22,y22,z22 },
		{x23,y23,z23 }
	};

	if (judge_triangle_topologicalStructure(&tri1, &tri2) == 0)
		cout << "intersection";
	else
		cout << "nonintersection";

	system("pause");
}


