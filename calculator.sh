echo "Enter the first  number"
read n1

choice="y"
echo "Enter the second number"
read n2
while [ $choice = "y" ]
do
sum1=0
echo "Enter 1 for addition"
echo "Enter 2 for substration"
echo "Enter 3 for multiplication"
echo "Enter 4 for division"
read choice2

case $choice2 in
   1)sum1=`expr $n1 + $n2`
     echo "Sum = "$sum1;;
   2)sum1=`expr $n1 - $n2`
     echo "difference = "$sum1;;
     
   3) sum1=`expr $n1 \* $n2`
      echo "Product = "$sum1;;
   4) sum1=`expr $n1 / $n2`
      echo "Quotient = "$sum1;;
   *) echo "Invalid choice";;
esac

echo "Do you want to continue"
read ch
if [ $ch != "y" ]
then 
   exit
fi
done

