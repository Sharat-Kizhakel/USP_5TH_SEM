echo "Enter a number:"
read number
echo "Enter the power:"
read power
limit=0
ans=1
power1=$power
while [ $power1 -gt $limit ]
do
  ans=$(($ans*$number))
  power1=$(($power1-1))
done
echo "$number raised to power $power gives: $ans"