#include "Jet.h"
#include <cstdlib>


Jet::Jet(string brand, string model, int EngineCount) {
    setBrand(brand);
    setModel(model);
    setEngineCount(engineCount);
}

Jet::~Jet() = default;

int Jet::getEngineCount() {
    return myEngineCount;
}

void Jet::setGearCount(int engineCount) {
    myEngineCount = engineCount;
}

double Jet::mileageEstimate(double time) {
	int randNum = 0;
	while(randNum < 40 || randNum > 100){
		randNum = rand() % 100;
	}
	
    double mileage = randNum  * time;
	if(numberOfEngines > 2){
		mileage += mileage * (numberOfEngines * 0.55);
	}
    return mileage;
}

string Jet::toString() {
    string s = "-> Jet\n\t";
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngines: " +
           to_string(myEngineCount);
}