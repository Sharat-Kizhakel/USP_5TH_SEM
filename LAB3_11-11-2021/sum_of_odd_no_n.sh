echo "enter the number"
read n
i=1
sum=0
while [ $i -lt $n ]
do
  sum=$(($sum+i))
  i=$(($i+2))
done
echo "Sum of odd nos is: $sum"