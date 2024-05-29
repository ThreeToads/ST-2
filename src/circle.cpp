// Copyright 2022 Kokin Ivan
#include <cstdint>
#include <cmath>
#include <stdexcept>
#include "circle.h"

double Circle::getArea() const {
    return area;
}

void Circle::setArea(double Area) {
    if (Area <= 0.0) {
        throw std::invalid_argument("Area invalid value");
    }
    Circle::area = Area;
    Circle::radius = sqrt(Circle::area * M_1_PI);
    Circle::ference = 2.0 * Circle::radius * M_PI;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    if (radius <= 0.0) {
        throw std::invalid_argument("invalid value radius");
    }
    Circle::radius = radius;
    ference = 2.0 * M_PI * Circle::radius;
    area = Circle::radius * M_PI * Circle::radius;
}

double Circle::getFerence() const{
    return ference;
}

void Circle::setFerence(double _ference) {
    if (_ference <= 0.0) {
        throw std::invalid_argument("invalid value ference");
    }
    Circle::ference = _ference;
    Circle::radius = 0.5 * _ference * M_1_PI;
    Circle::area =  M_PI * std::pow(radius, 2);
}

Circle::Circle(double radius) {
    setRadius(radius);
}
