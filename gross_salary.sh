#Write a shell script to calculate gross salary, Gross Salary =Basic Pay + DA + HRA
#DA=10% AND HRA=20%
echo "Enter the basic salary"
read basic
grossal=$( echo "$basic+((0.10*$basic))+((0.20*$basic))" | bc )
echo " Gross sal is : $grossal"