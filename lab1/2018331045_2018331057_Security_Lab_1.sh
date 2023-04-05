letters=(a b aa ab ba bb aaa aab aba abb baa bab bba bab bbb aaaa aaab aaba aabb abaa)
i=0
while [ ${i} -le 20 ]  
do
	touch ${letters[${i}]}.txt
	(( i++ ))
done

rm -r ./a*