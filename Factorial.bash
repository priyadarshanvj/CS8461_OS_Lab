#                             Online Bash Shell.
#                 Code, Compile, Run and Debug Bash script online.
# Write your code in this editor and press "Run" button to execute it.


echo "Enter the number"
read x
i=`expr $x - 1`
while [ $i -gt 0 ]
do
x=`expr $x \* $i`
i=`expr $i - 1`
done
echo "The factorial is $x"

