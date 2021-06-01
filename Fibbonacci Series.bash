#                             Online Bash Shell.
#                 Code, Compile, Run and Debug Bash script online.
# Write your code in this editor and press "Run" button to execute it.



echo "201901096 Priyadarshan V J"
echo "Enter a number"
read n
a=-1
b=1
echo "Fibbonacci Series: "
while [ $n -gt 0 ]
do
    c=`expr $a + $b`
    a=$b
    b=$c
    echo "$c"
    n=`expr $n - 1`
done