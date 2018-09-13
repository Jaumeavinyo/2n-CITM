#include <stdio.h>
#include "Vector3D.h"



Vector3D::Vector3D(): x(0),y(0),z(0){
	printf("CONSTRUCTOR WORKING \n");
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
	printf("x:%i y:%i z:%i \n", x, y, z);
}
void Vector3D::SumVectors(Vector3D v1_, Vector3D v2_) {

}