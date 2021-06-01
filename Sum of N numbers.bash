#                             Online Bash Shell.
#                 Code, Compile, Run and Debug Bash script online.
# Write your code in this editor and press "Run" button to execute it.



echo "201901096 Priyadarshan V J"
echo "Enter the limit"
read p
i=1
s=0
while [ $i -le $p ]
do
    echo "Enter no."
    read x
    s=`expr $s + $x`
    i=`expr $i + 1`
done
echo "The sum is $s"