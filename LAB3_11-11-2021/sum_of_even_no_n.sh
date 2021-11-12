echo "enter the number"
read n
i=2
sum=0
while [ $i -lt $n ]
do
  sum=$(($sum+i))
  i=$(($i+2))
done
echo "Sum of even nos is: $sum"