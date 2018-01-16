echo "Enter a string"
read str
len=${#str}
i=0
rev=""
while [ $i -lt $len ]
do
p=$(($len-$i))
c=`echo $str | cut -c $p`
rev="$rev$c"
i=`expr $i + 1`
done
if test $rev = $str
then
echo "Is a Palindrome"
else
echo "Not a Palindrome"
fi
