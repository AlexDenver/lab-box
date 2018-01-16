cat $1 | tr [a-z] [A-Z] > "$1.out"
sort $1 -nrt',' -k8 -k7 | head -n5 
