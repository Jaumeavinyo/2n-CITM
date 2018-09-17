#pragma once
#ifndef VECTOR3D_
#define VECTOR3D_
#include "cstdio"
#include "math.h"
using namespace std;

class Vector3D {
private:
	int x, y, z;
public:

	Vector3D();
	~Vector3D();
public:
	void SetVector(float x, float y, float z);
public:
	int Getx();
	int Gety();
	int Getz();
public:
	void PrintValues();
public: 
	Vector3D normalize(Vector3D &v);
	
	float length() {
		float length;
		length = sqrt((this->x*this->x) + (this->y*this->y) + (this->z*this->z));
		return length;
	}
public:
	Vector3D operator+(Vector3D &v) {
		Vector3D Newvec;
		Newvec.x = this->x + v.x;
		Newvec.y = this->y + v.y;
		Newvec.z = this->z + v.z;
		return Newvec;
	}
	Vector3D operator-(Vector3D &v) {
		Vector3D  Newvec;
		Newvec.x = this->x - v.x;
		Newvec.y = this->y - v.y;
		Newvec.z = this->z - v.z;

		return Newvec;
	}
	void operator+=(Vector3D &v) {  //V1+=V2;
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
	}
	void operator-=(Vector3D &v) {  //V1+=V2;
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;
	}
	//void operator=(Vector3D &v) {  //V1=V2
	//	this->x = v.x;
	//	this->y = v.y;
	//	this->z = v.z;
	//}
public:
	void Zero();
	bool IsZero();
	float DistanceBetween( Vector3D v2);
	static Vector3D Normalize(Vector3D v1);
};
#endif

