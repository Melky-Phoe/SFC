//
// Created by nothrax on 24.11.20.
//

#include "Griewank.h"


double Griewank::calculateFitness(Point point) {
    double result = ((point.x*point.x)/4000) + ((point.y*point.y)/4000) - (cos(point.x/sqrt(1))*cos(point.y/sqrt(2))) + 1;
    return result;
}

double Griewank::getMinFitness() {
    return 0.0;
}

Point Griewank::getBoundary() {
    Point point = {100.0,100.0};
    return point;
}