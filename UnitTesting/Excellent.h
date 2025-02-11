#ifndef EXCELLENT_H
#define EXCELLENT_H

#include "RoadState.h"
#include <string>

class Excellent : public RoadState {
public:
    Excellent();
    virtual ~Excellent();

    virtual void upgrade(Road* road) override;

    virtual void handleYear(Road* road) override;

    virtual std::string getStateName() const override;

    virtual double getProductivity() const override;

    virtual double getSatisfaction() const override;

    virtual double getUpgradeCost() const override;
};

#endif 
