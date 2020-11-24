//
// Created by nothrax on 24.11.20.
//

#include "Michalewicz.h"
double Michalewicz::calculateFitness(Point point) {
    double result = (sin(point.x)*pow(sin((1*point.x*point.x)/M_PI),20)) + (sin(point.y)*pow(sin((2*point.y*point.y)/M_PI),20));
    return result;
}

double Michalewicz::getMinFitness() {
    return -1.8013;
}

Point Michalewicz::getBoundary() {
    Point point = {4.0,4.0};
    return point;
}