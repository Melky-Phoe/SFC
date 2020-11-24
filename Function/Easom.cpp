//
// Created by nothrax on 24.11.20.
//

#include "Easom.h"
double Easom::calculateFitness(Point point) {
    double result = -cos(point.x)*cos(point.y)*exp(-(point.x - M_PI)*(point.x - M_PI) - (point.y - M_PI)*(point.y - M_PI));
    return result;
}

double Easom::getMinFitness() {
    return -1.0;
}

Point Easom::getBoundary() {
    Point point = {80.0,80.0};
    return point;
}