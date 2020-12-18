#!/bin/bash
cat /etc/passwd | grep -v '^#' | sed -n 'n;p'| cut -d ':' -f 1 | tr -d '_' | rev | sort -f -r | awk '/$FT_LINE1/,/$FT_LINE2/' | tr ' ' ','
