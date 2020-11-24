//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_GRIEWANK_H
#define SFC_GRIEWANK_H

#include "Function.h"
//https://www.sfu.ca/~ssurjano/griewank.html

class Griewank : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_GRIEWANK_H
