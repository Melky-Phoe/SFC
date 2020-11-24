//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_MICHALEWICZ_H
#define SFC_MICHALEWICZ_H
#include "Function.h"
//https://www.sfu.ca/~ssurjano/michal.html
class Michalewicz : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};

#endif //SFC_MICHALEWICZ_H
