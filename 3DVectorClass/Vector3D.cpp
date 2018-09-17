#include <stdio.h>
#include "Vector3D.h"



Vector3D::Vector3D(): x(0),y(0),z(0){
}


Vector3D::~Vector3D(){
}

void Vector3D::SetVector(float x_, float y_, float z_) {
	Vector3D::x = x_;
	Vector3D::y = y_;
	Vector3D::z = z_;
}

int Vector3D::Getx() {
	return Vector3D::x;
}
int Vector3D::Gety() {
	return Vector3D::y;
}
int Vector3D::Getz() {
	return Vector3D::z;
}
void Vector3D::PrintValues() {
	printf("\n --printing a vector: x:%f y:%f z:%f \n", x, y, z);
}
Vector3D Vector3D::normalize(Vector3D &v) {
	Vector3D normalizedvector;
	return normalizedvector;
}
void Vector3D::Zero() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}
bool Vector3D::IsZero() {
	bool ret = false;
	if (this->x == 0 && this->y == 0 && this->z == 0) {
		ret = true;
	}
	return ret;
}
float Vector3D::DistanceBetween( Vector3D v2) {
	Vector3D Aux;

	Aux.x = this->x - v2.x;
	Aux.y = this->y - v2.y;
	Aux.z = this->z - v2.z;

	float Aux1;

	Aux1 = Aux.length();

	return Aux1;
}
Vector3D Vector3D::Normalize(Vector3D v1) {
	Vector3D aux;
	aux.x = v1.x / v1.length();
	aux.y = v1.y / v1.length();
	aux.z = v1.z / v1.length();
	return aux;
}
