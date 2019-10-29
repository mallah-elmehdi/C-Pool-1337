#!/bin/bash
ifconfig -a | grep -w "ether" | cut -d ':' -f 1,2,3,4,5,6 | cut -d ' ' -f 2
