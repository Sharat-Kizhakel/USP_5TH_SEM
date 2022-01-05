# Shell script to check number of lines, words, characters in a file
echo "Enter the file name"
read file_name
c=0
 if [ -r $fname ]
 then
 line_count=`cat $file_name | wc -l`
 word_count=`cat $file_name | wc -w`
 char_count=`cat $file_name | wc -c`
 echo "The word count is $word_count"
 echo "The char count is $char_count"
 echo "The line count is $line_count"
 else
   echo "File doesnt exist"
 fi 