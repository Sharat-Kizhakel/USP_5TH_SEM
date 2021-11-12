# Write a Shell script to convert Fahrenheit to Celsius Temperature 
echo "Enter the temperature in Fahrenheit"
read f
c=$( echo "scale=3;(5/9)*($f-32)" | bc )
echo "Temp in celcius: $c "