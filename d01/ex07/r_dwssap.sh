cat /etc/passwd | sed 's/:\(.*\)//g' | sed 1n | sed '2,$ n;d' | rev | sort -r | sed -n -e ':$FT_LINE1:,:$FT_LINE2:p' | sed 's/ /, /g' | tr '\n' .
