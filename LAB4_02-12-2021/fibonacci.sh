echo "Enter a number"
read n
i=2
a=0
b=1
echo "$a"
echo "$b"
c=$(($a+$b))
echo "$c"
while [ $i -lt $n ]
do
    a=$b
    b=$c
    c=$(($a+$b))
    i=$(($i+1))
    echo "$c"
done