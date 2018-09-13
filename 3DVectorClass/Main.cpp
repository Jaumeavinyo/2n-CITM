#include "Vector3D.h"
#include<cstdio>
#include<math.h>
#include<iostream>

using namespace std;

int main() {

	Vector3D V1;
	Vector3D V2;
	Vector3D V3;
	Vector3D V4;
	//_____________________________

	V1.SetVector(2, 5, 1);

	V1.PrintValues();

	//_____________________________

	V2.SetVector(2, 3, 1);

	V2.PrintValues();


	V3 = V2 + V1;
	
	V3.PrintValues();

	V3 = V1 - V2;

	V3.PrintValues();
	//_____________________________

	printf("\n here goes the magic \n");
	V1.PrintValues();

	V1 += V2;

	V1.PrintValues();


	printf("\n \n More magic stuf here \n\n");
	V1.PrintValues();

	V1 -= V2;

	V1.PrintValues();

	printf("\n does this stuff works? ---> YES*");
	//____________________________

	printf(" \n useless magic stuff also here -------------2n part ");

	V1.PrintValues();

	V1 = V2;

	V1.PrintValues();

	
	printf("\n does this stuff works? ---> *");


	V4.SetVector(1, 1, 1);
	int y;
	y = Vector3D::length(V4);

	printf("\n %i \n", y);
	system("pause");
	return 0;
}

//int x = 2;
//int y = pow(x, 2);
//printf("x^2 = %i \n", y);
