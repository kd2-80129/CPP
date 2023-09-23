#include "./Cylinder.h"
Cylinder::Cylinder()
{
    this->height = 0;
    this->radius = 0;
}

Cylinder::Cylinder(double radius, double height) : radius(radius), height(height) {}

double Cylinder::getRadius()
{
    return radius;
}

void Cylinder::setRadius(double radius)
{
    this->radius = radius;
}

double Cylinder::getHeight()
{
    return height;
}

void Cylinder::setHeight(double height)
{
    this->height = height;
}

double Cylinder::getVolume()
{
    return PI * radius * radius * height;
}

void Cylinder::printVolume()
{
    double volume;
    volume = PI * this->radius * this->radius * this->height;
    cout << "The calculated volume is: " << volume << endl;
}