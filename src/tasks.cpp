// Copyright 2024 Kokin Ivan

#include "tasks.h"
#include "circle.h"

double TaskForPlanet(double radiusOfPlanet, double radiusInc) {
    Circle circle(radiusOfPlanet);
    circle.setFerence(circle.getFerence() + radiusInc);

    return circle.getRadius() - radiusOfPlanet;
}

double TaskForPoolPath(
        double radius, double Width,
        double concreticPrice, double fencePrice) {
    Circle Pool(radius);
    Circle fence(radius + Width);
    double Area = fence.getArea() - Pool.getArea();

    return Area * concreticPrice + fence.getFerence() * fencePrice;
}
