#include <stdio.h>
#include "Vector3D.h"



Vector3D::Vector3D(): x(0),y(0),z(0){
}


Vector3D::~Vector3D(){
}

void Vector3D::SetVector(int x_, int y_, int z_) {
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
	printf("\n --printing a vector: x:%i y:%i z:%i \n", x, y, z);
}
Vector3D Vector3D::normalize(Vector3D &v) {
	Vector3D normalizedvector;
	return normalizedvector;
}
int Vector3D::length(Vector3D &v) {
	int length;
	length = sqrt((v.x*v.x) + (v.y*v.y) + (v.z*v.z));
	return length;
}
