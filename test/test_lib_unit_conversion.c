#include "var.h"
#include "unity.h"
#include "lib_unit_conversion.h"

void setUp( void )
{
}

void tearDown( void )
{
}

void test_fahrenheit_to_celcuis( void )
{
    float celcuis [6] = { -40, -15, 0, 15, 40, 225 };
    float fahrenheit [6] = { -40, 5, 32, 59, 104, 437 };
    for(int i = 0; i < sizeof(celcuis)/sizeof(celcuis[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( celcuis[i] , fahrenheit_to_celcuis( fahrenheit[i] ) );
    }
}

void test_celcuis_to_fahrenheit( void )
{
    float celcuis [6] = { -40, -15, 0, 15, 40, 225 };
    float fahrenheit [6] = { -40, 5, 32, 59, 104, 437 };
    for(int i = 0; i < sizeof(celcuis)/sizeof(celcuis[0]); i++)
    {
        TEST_ASSERT_EQUAL_FLOAT( fahrenheit[i] , celcuis_to_fahrenheit( celcuis[i] ) );
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

