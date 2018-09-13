#pragma once
#ifndef VECTOR3D_
#define VECTOR3D_

using namespace std;

class Vector3D {
private:
	int x, y, z;
public:

	Vector3D();
	~Vector3D();
public:
	void SetVector(int x,int y, int z);
public:
	int Getx();
	int Gety();
	int Getz();
public:
	void PrintValues();
public:
	void SumVectors(Vector3D v1, Vector3D v2);

};
#endif

