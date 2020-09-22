/*
 * lib_unit_conversion.h
 *
 *  Created on: Dec 29, 2019
 *      Author: mkaiser
 */

#ifndef LIB_UNIT_CONVERSION_H_
#define LIB_UNIT_CONVERSION_H_

#include "lib_pid.h"

#define MPH_TO_KPH_FACTOR (float)1.6093440
#define KPA_TO_PSI_FACTOR (float)0.1450377

float convert_units( PID_UNITS in, PID_UNITS out, float value );
float fahrenheit_to_celcuis( float fahrenheit );
float celcuis_to_fahrenheit( float celcuis );
float kmh_to_mph( float kmh );
float mph_to_kmh( float mph );
float kpa_to_psi( float kpa);
float psi_to_kpa( float psi );

#endif /* LIB_UNIT_CONVERSION_H_ */
