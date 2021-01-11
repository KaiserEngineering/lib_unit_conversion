/*
 * lib_unit_conversion.h
 *
 *  Created on: Dec 29, 2019
 *      Author: mkaiser
 */

#ifndef LIB_UNIT_CONVERSION_H_
#define LIB_UNIT_CONVERSION_H_

/*
 * Use lib_pid to get the units, if it is not part of the project
 * then define the units in lib_unit_conversion.
 */
#ifdef PID_H_
#include "lib_pid.h"
#else
    typedef enum _pid_units {
        PID_UNITS_NOT_APPLICABLE,
        PID_UNITS_PERCENT,
        PID_UNITS_CELCIUS,
        PID_UNITS_FAHRENHEIT,
        PID_UNITS_KPA,
        PID_UNITS_PSI,
        PID_UNITS_RPM,
        PID_UNITS_KMH,
        PID_UNITS_MPH,
        PID_UNITS_GRAMSEC,
        PID_UNITS_DEGREES,
        PID_UNITS_VOLTS,
        PID_UNITS_KM,
        PID_UNITS_MILES,
        PID_UNITS_SECONDS,
        PID_UNITS_RATIO,
        PID_UNITS_LPH,
    } PID_UNITS, *PPID_UNITS;
#endif

#define MPH_TO_KPH_FACTOR (float)1.6093440
#define KPA_TO_PSI_FACTOR (float)0.1450377

PID_UNITS convert_units( PID_UNITS in, PID_UNITS out, float *value );
float fahrenheit_to_celcuis( float fahrenheit );
float celcuis_to_fahrenheit( float celcuis );
float kmh_to_mph( float kmh );
float mph_to_kmh( float mph );
float kpa_to_psi( float kpa);
float psi_to_kpa( float psi );

#endif /* LIB_UNIT_CONVERSION_H_ */
