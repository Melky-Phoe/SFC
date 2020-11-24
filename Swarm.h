//
// Created by nothrax on 23.11.20.
//

#ifndef SFC_SWARM_H
#define SFC_SWARM_H

#include "Particle.h"

class Swarm {
public:
    Swarm(SwarmOptions swarmOptions);
    void initializeSwarm();
    void simulateSwarm();
    bool makeStep();
    double getBestFitness();
    Point getBestPosition();
    int getStepNumber();
    std::vector<Point> getActualPositions();
    ~Swarm();

private:
    std::vector<Particle *> swarm;
    SwarmOptions swarmOptions;
    double bestFitness = DBL_MAX;
    Point bestPosition;
    double expectedResult;
    int stepNumber = 0;


    void createSwarm();
    void initializeParticles();
    void initializeNeighbourhoods();
    void broadcastGlobalResult();
    //void makeStep();
    void compareParticleWithGlobalMinimum(Particle *particle);
    std::vector<Particle *> getSwarm();
};


#endif //SFC_SWARM_H
