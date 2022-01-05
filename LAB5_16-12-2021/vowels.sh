# Shell script to count the number of vowels of a string
# data flows from left to right through the pipeline.
echo "Enter a String"
read str
len=`echo $str | wc -c`
i=1
n=0
while [ $i -le $len ]
do
  ch=`echo $str | cut -c $i`
  case "$ch" in
        a|A|e|E|i|I|o|O|u|U) n=$(($n+1));;
  esac 
  i=$(($i+1))
done
echo "Number of vowels is: $n"