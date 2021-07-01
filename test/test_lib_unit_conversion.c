#include "var.h"
#include "unity.h"
#include "lib_unit_conversion.h"

void setUp( void )
{
}

void tearDown( void )
{
}

void test_fahrenheit_to_celsuis( void )
{
    float celsuis [6] = { -40, -15, 0, 15, 40, 225 };
    float fahrenheit [6] = { -40, 5, 32, 59, 104, 437 };
    for(int i = 0; i < sizeof(celsuis)/sizeof(celsuis[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( celsuis[i] , fahrenheit_to_celsuis( fahrenheit[i] ) );
    }
}

void test_celsuis_to_fahrenheit( void )
{
    float celsuis [6] = { -40, -15, 0, 15, 40, 225 };
    float fahrenheit [6] = { -40, 5, 32, 59, 104, 437 };
    for(int i = 0; i < sizeof(celsuis)/sizeof(celsuis[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( fahrenheit[i] , celsuis_to_fahrenheit( celsuis[i] ) );
    }
}

void test_kmh_to_mph( void )
{
    float kmh [6] = { 0, 15, 35, 60, 80, 120 };
    float mph [6] = { 0, 9.32057, 21.748, 37.2823, 49.7097, 74.5645 };
    for(int i = 0; i < sizeof(kmh)/sizeof(kmh[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( mph[i] , kmh_to_mph( kmh[i] ) );
    }
}

void test_mph_to_kph( void )
{
    float kmh [6] = { 0, 15, 35, 60, 80, 120 };
    float mph [6] = { 0, 9.32057, 21.748, 37.2823, 49.7097, 74.5645 };
    for(int i = 0; i < sizeof(kmh)/sizeof(kmh[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( kmh[i] , mph_to_kmh( mph[i] ) );
    }
}

void test_kpa_to_psi( void )
{
    float kpa [6] = { 10, 30, 50, 100, 200, 300 };
    float psi [6] = { 1.45038, 4.35113, 7.25189, 14.5038, 29.0075, 43.5113 };
    for(int i = 0; i < sizeof(kpa)/sizeof(kpa); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( psi[i] , kpa_to_psi( kpa[i] ) );
    }
}

void test_psi_to_kpa( void )
{
    float kpa [6] = { 10, 30, 50, 100, 200, 300 };
    float psi [6] = { 1.45038, 4.35113, 7.25189, 14.5038, 29.0075, 43.5113 };
    for(int i = 0; i < sizeof(kpa)/sizeof(kpa); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( kpa[i] , psi_to_kpa( psi[i] ) );
    }
}

void test_convert_units_fahrenheit_to_celsuis( void )
{
    float celsuis [6] = { -40, -15, 0, 15, 40, 225 };
    float fahrenheit [6] = { -40, 5, 32, 59, 104, 437 };
    for(int i = 0; i < sizeof(celsuis)/sizeof(celsuis[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( celsuis[i] , convert_units( PID_UNITS_FAHRENHEIT, PID_UNITS_CELSIUS, fahrenheit[i] ) );
    }
}

void test_convert_units_celsuis_to_fahrenheit( void )
{
    float celsuis [6] = { -40, -15, 0, 15, 40, 225 };
    float fahrenheit [6] = { -40, 5, 32, 59, 104, 437 };
    for(int i = 0; i < sizeof(celsuis)/sizeof(celsuis[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( fahrenheit[i] , convert_units( PID_UNITS_CELSIUS, PID_UNITS_FAHRENHEIT, celsuis[i] ) );
    }
}

void test_convert_units_kmh_to_mph( void )
{
    float kmh [6] = { 0, 15, 35, 60, 80, 120 };
    float mph [6] = { 0, 9.32057, 21.748, 37.2823, 49.7097, 74.5645 };
    for(int i = 0; i < sizeof(kmh)/sizeof(kmh[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( mph[i] , convert_units( PID_UNITS_KMH, PID_UNITS_MPH, kmh[i] ) );
    }
}

void test_convert_units_mph_to_kph( void )
{
    float kmh [6] = { 0, 15, 35, 60, 80, 120 };
    float mph [6] = { 0, 9.32057, 21.748, 37.2823, 49.7097, 74.5645 };
    for(int i = 0; i < sizeof(kmh)/sizeof(kmh[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( kmh[i] , convert_units( PID_UNITS_MPH, PID_UNITS_KMH, mph[i] ) );
    }
}

void test_convert_units_kpa_to_psi( void )
{
    float kpa [6] = { 10, 30, 50, 100, 200, 300 };
    float psi [6] = { 1.45038, 4.35113, 7.25189, 14.5038, 29.0075, 43.5113 };
    for(int i = 0; i < sizeof(kpa)/sizeof(kpa); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( psi[i] , convert_units( PID_UNITS_KPA, PID_UNITS_PSI, kpa[i] ) );
    }
}

void test_convert_units_psi_to_kpa( void )
{
    float kpa [6] = { 10, 30, 50, 100, 200, 300 };
    float psi [6] = { 1.45038, 4.35113, 7.25189, 14.5038, 29.0075, 43.5113 };
    for(int i = 0; i < sizeof(kpa)/sizeof(kpa); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( kpa[i] , convert_units( PID_UNITS_PSI, PID_UNITS_KPA, psi[i] ) );
    }
}

