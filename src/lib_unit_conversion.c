/*
 * lib_unit_conversion.c
 *
 *  Created on: Dec 29, 2019
 *      Author: mkaiser
 */

#include "lib_unit_conversion.h"

float convert_units( PID_UNITS in, PID_UNITS out, float value )
{
    if( (in == PID_UNITS_FAHRENHEIT) && (out == PID_UNITS_CELCIUS) )
        return fahrenheit_to_celcuis( value );

    else if( (in == PID_UNITS_CELCIUS) && (out == PID_UNITS_FAHRENHEIT) )
            return celcuis_to_fahrenheit( value );

    else if( (in == PID_UNITS_KMH) && (out == PID_UNITS_MPH) )
            return kmh_to_mph( value );

    else if( (in == PID_UNITS_MPH) && (out == PID_UNITS_KMH) )
            return mph_to_kmh( value );

    else if( (in == PID_UNITS_KPA) && (out == PID_UNITS_PSI) )
            return kpa_to_psi( value );

    else if( (in == PID_UNITS_PSI) && (out == PID_UNITS_KPA) )
            return psi_to_kpa( value );

    else
        return value;
}

float fahrenheit_to_celcuis( float fahrenheit )
{
    return (fahrenheit - (float)32.00) * ((float)5.00 / (float)9.00);
}

float celcuis_to_fahrenheit( float celcuis )
{
    return (celcuis * ((float)9.00 / (float)5.00)) + (float)32.00;
}

float kmh_to_mph( float kmh )
{
    return kmh / MPH_TO_KPH_FACTOR;
}

float mph_to_kmh( float mph )
{
    return mph * MPH_TO_KPH_FACTOR;
}

float kpa_to_psi( float kpa)
{
    return kpa * KPA_TO_PSI_FACTOR;
}

float psi_to_kpa( float psi )
{
    return psi / KPA_TO_PSI_FACTOR;
}
