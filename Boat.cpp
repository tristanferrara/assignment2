#include "Boat.h"
#include <cstdlib>


Boat::Boat(string brand, string model, int engineCount) {
	setBrand(brand);
	setModel(model);
	setEngineCount(engineCount);
}

Boat::~Boat() = default;

int Boat::getEngineCount() {
	return numberOfEngines;
}

void Boat::setEngineCount(int engineCount) {
	numberOfEngines = engineCount;
}

double Boat::mileageEstimate(double time) {
	int randNum = 0;
	while (randNum < 30 || randNum > 60) {
		randNum = rand() % 100;
	}

	double mileage = randNum * time;
	if (numberOfEngines > 2) {
		mileage += mileage * (numberOfEngines * 0.25);
	}
	return mileage;
}

string Boat::toString() {
	string s = "-> Boat\n\t";
	return "-> Boat\n" + PoweredVehicle::toString() + "\n\tEngines: " +
		to_string(numberOfEngines);
}