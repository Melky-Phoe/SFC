//
// Created by nothrax on 23.11.20.
//

#ifndef SFC_STRUCTURES_H
#define SFC_STRUCTURES_H
//#include "Ackley.h"

class Function;

struct Point{
    double x;
    double y;
};

struct SwarmOptions{
    unsigned int numberOfSteps = 100;
    unsigned int numberOfParticles = 13;
    unsigned int numberOfNeighbours = 3;
    Point boundary = {40.0,40.0};
    double speedLimit = 1.0;
    double error = 0.0001;
    Function *function = nullptr;
};

#endif //SFC_STRUCTURES_H
