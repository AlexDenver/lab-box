if [ $# -lt 1 ]
then
 echo "Command $0 Needs 1 Argument"
 exit
fi

#echo "Enter a WeekDayNumber(1-7): "
#read i;
case "$1" in
1)  echo "Monday"
    ;;
2)  echo  "Tuesday"
    ;;
3)  echo  "Wednesday"
    ;;
4) echo  "Thursday"
   ;;
5) echo "Friday"
   ;;
6) echo "Saturday"
   ;;
7) echo "Sunday"
   ;;
*) echo "Argument Value Should be Between 1-7"
   ;;
esac
