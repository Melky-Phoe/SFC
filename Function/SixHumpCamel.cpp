//
// Created by nothrax on 24.11.20.
//

#include "SixHumpCamel.h"
double SixHumpCamel::calculateFitness(Point point) {
    double result = (4 - 2.1*point.x*point.x + pow(point.x,4)/3)*point.x*point.x + point.x*point.y + (-4 + 4*point.y*point.y)*point.y*point.y;
    return result;
}

double SixHumpCamel::getMinFitness() {
    return -1.0316;
}

Point SixHumpCamel::getBoundary() {
    Point point = {2.0,1.0};
    return point;
}