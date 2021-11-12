echo "enter year"
read y
if [ $((y%4)) -eq 0   -a  $((y%100)) -ne 0 ]
then 
echo "Leap year"
elif [ $((y%400)) -eq 0 ]
then
echo " Leap year"
else
echo " Not leap year"
fi