#include <stdio.h>
// function to convert currency INR to USD
float convert_INR_USD(float amount, float dollar)
{
    dollar = amount * 0.013;
    // printing the currency in USD
    printf("currency %f Rupee =  %f dollar", amount, dollar);
}
// function to convert currency from USD to INR
float convert_USD_INR(float amount, float rupee)
{
    rupee = amount * 77.49;
    // printing the currency in INR
    printf("\ncurrency %f Dollar =  %f rupee", amount, rupee);
}
// function to convert length from meter to feet
float convert_meter_feet(float length, float feet)
{
    feet = length * 3.281;
    // printing  length in feet
    printf("\nlength %f  meter =  %f feet ", length, feet);
}
// function to convert length from feet to meter
float convert_feet_meter(float length, float meter)
{
    meter = length / 3.281;
    // printing  length in meter
    printf("\nlength %f feet = %f meter", length, meter);
}
// function to convert temperature from celsius to fahrenheit
float convert_celcius_fahrenheit(float fahrenheit, float temperature)
{
    fahrenheit = (temperature * 9 / 5) + 32;
    // printing temperature in fahrenheit
    printf("\ntemperature %f Celsius = %f Fahrenheit", temperature, fahrenheit);
}
// function to convert temperature from fahrenheit to celsius
float convert_fahrenheit_celsius(float celsius, float temperature)
{
    celsius = ((temperature - 32) * 5) / 9;
    // printing temperature in celsius
    printf("\ntemperature %f Fahrenheit = %f Celsius", temperature, celsius);
}
// function to convert speed from KMPH to MPH
float convert_KMPH_MPH(float MPH, float speed)
{
    MPH = (speed * 0.6213712);
    // printing speed in MPH
    printf("\nspeed %f KMPH = %f MPH", speed, MPH);
}
// function to convert speed from MPH to KMPH
float convert_MPH_KMPH(float KMPH, float speed)
{
    KMPH = speed / 0.6213712;
    // printing speed in KMPH
    printf("\nspeed %f MPH = %f KMPH ", speed, KMPH);
}
int main()
{
    float amount = 100;
    float dollar, rupee;
    float meter, feet, length = 16;
    float celsius, fahrenheit, temperature = 10;
    float MPH, KMPH, speed = 100;
    // INR_USD function calling
    convert_INR_USD(amount, dollar);
    // USD_INR function calling
    convert_USD_INR(amount, rupee);
    // meter_feet function calling
    convert_meter_feet(length, feet);
    // feet_meter function calling
    convert_feet_meter(length, meter);
    // celcius_fahrenheitfunction calling
    convert_celcius_fahrenheit(fahrenheit, temperature);
    // fahrenheit_celsiusfunction calling
    convert_fahrenheit_celsius(celsius, temperature);
    // KMPH_MPH function calling
    convert_KMPH_MPH(MPH, speed);
    // MPH_KMPHfunction calling
    convert_MPH_KMPH(KMPH, speed);
}