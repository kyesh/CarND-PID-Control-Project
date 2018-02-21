#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;
	d_error = 0;
	p_error = 0.7598;

	i_error = 0;
}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error = i_error + cte;
	if( i_error > 5){
		i_error = 5;
	}
	if(i_error < 5){
		i_error = -5;
	}
}

double PID::TotalError() {
}

