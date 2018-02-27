clear

sum1=0
echo "Enter the limit"
read n
i=0

while [ $i != n ]
do
 $sum1 = `expr $sum1 + i`
 $i = `expr $i + 2`
done

echo "Sum = "$sum1

