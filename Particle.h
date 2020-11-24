//
// Created by nothrax on 23.11.20.
//

#ifndef SFC_PARTICLE_H
#define SFC_PARTICLE_H

#include "Function/Ackley.h"
#include "Function/CrossInTray.h"
#include "Function/Griewank.h"
#include "Function/Sphere.h"
#include "Function/SixHumpCamel.h"
#include "Function/Easom.h"
#include "Function/Michalewicz.h"
#include <vector>
#include <cstdlib>
#include <random>
#include <iostream>
#include <cfloat>

class Particle {
public:
    Particle(Point boundary, double speedLimit, Function *function);
    void initializeState();
    void addNeighbour(Particle *particle);
    void makeIteration();

    Point getPosition();
    double getBestNeighbourFitness();
    Point getBestNeighbourPosition();
    void setBestGlobalResult(double globalFitness, Point globalPoint);
    void receiveBestNeighbourResult(Point position, double fitness);
private:
    Point position;
    Point velocity;
    double localFitness;
    double velocityLimit;
    Point boundary;
    Function *function;
    const double w = 0.721;
    const double c = 1.193;
    const double c_g = 2.05;
    const double c_p = 2.05;
    Point g_i;

    Point bestGlobalPosition;
    Point bestNeighbourPosition;
    double bestGlobalFitness = DBL_MAX;
    double bestNeighbourFitness = DBL_MAX;
    std::vector<Particle *> neighbourhood;

    void calculateFitness();
    void initializePosition();
    void initializeVelocity();
    void checkVelocity();
    void checkPosition();
    void tellFitnessToNeighbours();
    void calculateNewVelocity();
    void calculateNewPosition();
    void checkFitnessWithNeighbourhood();
};


#endif //SFC_PARTICLE_H
