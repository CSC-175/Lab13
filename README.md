Wind Chill Calculator Function

**Background**

In cold weather, meteorologists report an index called the wind chill factor, which takes into account the wind speed and temperature. The index provides a measure of the 
chilling effect of wind at a given air temperature. Windchill may be approximated by the formula:

where
v = wind speed in MPH 
t = temperature in degrees Fahrenheit when at or below 50 degrees
W = wind chill index (in degrees Fahrenheit)


Note: For MPH > 3.0 and air temp <= 50

Purpose of Assignment

This assignment has the following purposes:

Practice analyzing how to convert standard math formula nomenclature to C++ syntax
Practice creating a function to implement a modular unit

Assignment Description

Complete the given template that that prompts a user to enter a Fahrenheit temperature and wind speed by creating a function called windChill. 
The function accepts the two values, t (temperature) and v (wind speed), as inputs and implements the given formula and returns the wind chill temperature when the 
temperature is at or below 50 degrees Fahrenheit or returns the temperature with no conversion when MPH > 3.0 and air temp <= 50.
