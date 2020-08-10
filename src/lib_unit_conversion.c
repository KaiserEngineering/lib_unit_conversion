/*
 * lib_unit_conversion.c
 *
 *  Created on: Dec 29, 2019
 *      Author: mkaiser
 */

#include "lib_unit_conversion.h"

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
