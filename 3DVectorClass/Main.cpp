#include "Vector3D.h"
#include<cstdio>
#include<math.h>
#include<iostream>

using namespace std;

int main() {

	Vector3D V1;
	Vector3D V2;
	//_____________________________
	V1.PrintValues();

	V1.SetVector(22, 30, 1);

	V1.PrintValues();
	//_____________________________




	system("pause");
	return 0;
}