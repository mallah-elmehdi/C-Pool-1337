touch -r "bomb.txt" -A -01 "bomb.txt" | stat -r | cut -d ' ' -f9
