cat /etc/passwd | grep -v '#' | sed -n 'n;p' | rev | sort -r |\
awk '{if (NR >= '$FT_LINE1' && NR <= '$FT_LINE2') print}' |\
cut -d \* -f 2 | cut -c 2- | tr "\n" "," | sed 's/,/, /g' | rev | cut -c 3- | rev | tr '\n' '.'


