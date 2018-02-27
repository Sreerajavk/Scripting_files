echo "Enter the limit"
read n
i=0
count=0
while [ $count -le $n ]
do
  sum1=`expr $sum1 + $i`
  i=`expr $i + 2`
  count=`expr $count + 1`
done

echo "sum = "$sum1


