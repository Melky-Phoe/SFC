//
// Created by nothrax on 24.11.20.
//

#include "CrossInTray.h"

double CrossInTray::calculateFitness(Point point) {
    double result = -0.0001*pow(fabs(sin(point.x)*sin(point.y)*exp(fabs(100 - (sqrt(point.x*point.x + point.y*point.y))/M_PI))) + 1,0.1);
    return result;
}

Point CrossInTray::getBoundary() {
    Point point = {10.0,10.0};
    return point;
}

double CrossInTray::getMinFitness() {
    return -2.06261;
}

