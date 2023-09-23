#ifndef CYLINDER_H
#define  CYLINDER_H
#define PI 3.14
#include<iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;

public:
    Cylinder();
    Cylinder(double radius, double height);
    void setRadius(double radius);
    double getRadius();
    double getHeight();
    void setHeight(double height);
    double getVolume();
    void printVolume();
};
#endif