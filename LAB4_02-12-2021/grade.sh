echo "Enter marks1:"
read m1
echo "Enter marks2:"
read m2
echo "Enter marks3:"
read m3
echo "Enter marks4:"
read m4
echo "Enter marks5:"
read m5
avg=$(echo "scale=0;($m1+$m2+$m3+$m5)/5" | bc)
if [ $avg -gt 85 ]
then
echo "DISTINCTION"
elif [ $avg -gt 60 -a $avg -le 85 ]
then
echo "FIRST CLASS"
elif [ $avg -gt 40 -a $avg -le 60 ]
then
echo "SECOND CLASS"
elif [ $avg -lt 40 ] 
then
echo "You have failed"
fi 