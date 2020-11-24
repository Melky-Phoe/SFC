//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_ACKLEY_H
#define SFC_ACKLEY_H
#include "Function.h"
//https://www.sfu.ca/~ssurjano/ackley.html minimum is at 0,0
class Ackley : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_ACKLEY_H
