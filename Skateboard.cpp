#include "Skateboard.h"
#include <cstdlib>
#include <math.h>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
	double randNum = 0;
	while(randNum < 0.1 || randNum > 0.5){
		randNum =(rand() % 10) / 10;
	}
	
    double mileage = randNum * time;
	if(time > 25 && time < 250){
		
		while(randNum < 1 || randNum > (time/3)){
		randNum =(rand() % 250) + 1;
		}
		
		mileage = mileage + randNum;
	}
	
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString() + "\n\tGears: ";
}