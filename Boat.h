#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h"

class Boat : public PoweredVehicle {

private:
	int numberOfEngines;

public:
	explicit Boat(string brand, string model, int engineCount = 1);

	virtual ~Boat();
	int getEngineCount();
	void setEngineCount(int engineCount);
	virtual double mileageEstimate(double time);

	virtual string toString();
};


#endif

