echo "enter the num1:"
read num1
echo "enter the num2:"
read num2
echo "enter the num3:"
read num3
echo "enter the num4:"
read num4
sum=0
product=0
average=0
echo "the sum is:"
echo $(("$num1 + $num2 + $num3 + $num4"))
echo "the product is:"
echo $(("$num1 * $num2 * $num3 * $num4"))
echo "the average is:"
echo $(("(($num1 + $num2 + $num3 + $num4)/4)"))

