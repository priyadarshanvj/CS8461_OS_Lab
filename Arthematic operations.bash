#                             Online Bash Shell.
#                 Code, Compile, Run and Debug Bash script online.
# Write your code in this editor and press "Run" button to execute it.

echo "201901096 Priyadarshan"
echo "Enter two values"
read a b
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multuplication"
echo "4.Division"
echo "Enter your choice"
read ch
case "$ch" in

1)	x=`expr $a + $b` 
echo "The sum is $x";;

2)	x=`expr $a - $b` 
echo "The diff is $x";;

3)	x=`expr $a \* $b`
echo "The product is $x";;

4)	x=`expr $a / $b`
echo "The quotient is $x";; 
esac
