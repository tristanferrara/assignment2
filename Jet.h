#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "Vehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    explicit Jet(string brand, string model, int engineCount = 1);

    virtual ~Jet();
    int getEngineCount();
    void setEngineCount(int engineCount);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif
