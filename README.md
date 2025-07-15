# Wind Chill Function

## Background

In cold weather, meteorologists report an index called the wind chill factor, which takes into account the wind speed and temperature. The index provides a measure of the 
chilling effect of wind at a given air temperature. Note: For MPH > 3.0 and air temp <= 50 
</br></br>
The windchill formula is: </br>
$W = 35.74 + 0.6215t - 35.75v^{0.16} + 0.4275tv^{0.16}$

where
<pre><b>v</b> = wind speed in MPH when above 3.0 MPH
<b>t</b> = temperature in degrees Fahrenheit when at or below 50 degrees
<b>W</b> = wind chill index (in degrees Fahrenheit)</pre>

## Directions

Complete the given template (**lab13.cpp**) that defines the **windChill** function. The function accepts the two floating point values, t (temperature) and v (wind speed), as inputs and implements the given formula and returns the wind chill temperature when the 
temperature is at or below 50 degrees Fahrenheit and the wind speed in above 3.0 MPH or returns the temperature with no conversion when required conditions do not exist.
