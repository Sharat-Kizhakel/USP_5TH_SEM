echo "enter 2 numbers"
read a
read b
echo -e "enter \n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for remainder \n 5 for quotient"
read c
case $c in
1) x=`echo $a + $b | bc`
     echo $x ;;
2) x=`echo $a - $b | bc`
     echo $x ;;
3) x=`echo $a \* $b | bc`
     echo $x ;;
4) x=`echo $a % $b | bc`
     echo $x ;;
5) x=`echo $a / $b | bc`
     echo $x ;;
*) echo  "invalid"
esac