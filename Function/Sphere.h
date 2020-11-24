//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_SPHERE_H
#define SFC_SPHERE_H

#include "Function.h"
//https://www.sfu.ca/~ssurjano/spheref.html
class Sphere : public Function{
public:
    double calculateFitness(Point point) override;
    //Point getMinPoint() override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_SPHERE_H
