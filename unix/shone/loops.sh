echo "Enter no of digits to print:"
read n
i=1
x=""
while [ $i -le $n ]
do
 x="$x $i"
 i=$(($i+1))
done
echo $x

for b in {1..$n}
do
echo $b
exit
done
