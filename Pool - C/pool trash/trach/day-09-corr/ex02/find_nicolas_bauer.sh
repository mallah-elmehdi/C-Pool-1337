#!/bin/bash
grep -i 'nicolas\tbauer' contacts_hard.txt | tail -n 2 | cut -d$'\t' -f4,5 | cut -d 'n' -f1 | sed 's/37033//g' | tr -d '\t'
