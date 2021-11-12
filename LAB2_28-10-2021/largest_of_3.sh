echo Enter three numbers
read a
read b
read c
if [ $a -gt $b -a $a -gt $c ]
then
echo $a is biggest number
elif [ $b -gt $a -a $b -gt $c ]
then
echo $b is biggest number
else
echo $c is biggest number
fi