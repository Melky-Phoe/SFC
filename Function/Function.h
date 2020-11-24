//
// Created by nothrax on 23.11.20.
//

//todo doku http://clerc.maurice.free.fr/pso/SPSO_descriptions.pdf --official SPSO description

#ifndef SFC_FUNCTION_H
#define SFC_FUNCTION_H
#include "../Structures.h"
#include <cmath>

//todo diku vsecky fce https://www.sfu.ca/~ssurjano/optimization.html
class Function{
public:
    //Function();
    virtual double calculateFitness(Point point) = 0;
    //virtual Point getMinPoint();
    virtual double getMinFitness() = 0;
    virtual Point getBoundary();
    //~Function();
    //static double ackley(Point position);
protected:
};


#endif //SFC_FUNCTION_H
