echo "Enter Name:"
read name
nlen=${#name}

while [ $nlen -eq 0 -o $nlen -gt 20 ]
do
if [ $nlen -eq 0 ]
then
echo "Name Cannot Be Empty"
else
echo "Name Cannot Be Greater than 20 Chars"
fi
echo "Enter Name:"
read name
nlen=${#name}
done

echo "Ener USN:"
read usn
ulen=${#usn}

while [ $ulen -eq 0 -o $ulen -ne 10 ] 
do
if [ $nlen -eq 0 ]
then
echo "USN Cannot Be Empty"
else
echo "USN Needs to have 10 Chars."
fi
echo "Enter USN"
read usn
ulen=${#usn}
done

if [ $nlen -le 20 -a  $ulen -eq 10 ]
then
echo "$name\t\t$usn" >> students
fi

