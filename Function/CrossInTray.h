//
// Created by nothrax on 24.11.20.
//

#ifndef SFC_CROSSINTRAY_H
#define SFC_CROSSINTRAY_H


#include "Function.h"
//https://www.sfu.ca/~ssurjano/crossit.html minimum is -2.06261
class CrossInTray : public Function {
public:
    double calculateFitness(Point point) override;
    double getMinFitness() override;
    Point getBoundary() override;
};


#endif //SFC_CROSSINTRAY_H
