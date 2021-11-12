echo Enter an integer
read a
if [ $a -gt 0 ]
then
echo It is positive
elif [ $a -lt 0 ]
then
echo It is negative
else
echo It is a zero
fi