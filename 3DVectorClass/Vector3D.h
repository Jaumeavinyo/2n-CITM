#pragma once
#ifndef VECTOR3D_
#define VECTOR3D_
#include "cstdio"
#include "math.h"
using namespace std;




//LINT FO C++ (STATIC ANALYSER)

//VIRTUAL DESTRUCTORS ALWAYS?
//WHY SHOULDN'T DO THIS?:  vec.x == 0.0f

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
	Vector3D operator+(const Vector3D &v)const {
		Vector3D Newvec;
		Newvec.x = this->x + v.x;
		Newvec.y = this->y + v.y;
		Newvec.z = this->z + v.z;
		return Newvec;
	}
	Vector3D operator-(const Vector3D &v)const {
		Vector3D  Newvec;
		Newvec.x = this->x - v.x;
		Newvec.y = this->y - v.y;
		Newvec.z = this->z - v.z;

		return Newvec;
	}
	void operator+=(const Vector3D &v) {  //V1+=V2;
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
	}
	void operator-=(const Vector3D &v) {  //V1+=V2;
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;
	}
	bool operator== (const Vector3D &v) {

		if ((x == v.x) && (y == v.y) && (z == v.z)) {
			return true;
		}
		else
			return false;

	}

	void operator=(Vector3D &v) {

		x = v.x;
		y = v.y;
		z = v.z;
	};
public:
	void Zero();
	bool IsZero();
	float DistanceBetween( Vector3D v2);
	static Vector3D Normalize(Vector3D v1);
};
#endif

