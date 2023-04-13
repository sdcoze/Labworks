#!/bin/bash

op=$1

if [ "$2" = "info" ]

   then 

echo "-----------------------------------------"
echo "cpu MHz - частота процесора в мегагерцах."
echo "-----------------------------------------"
fi

value=$(grep "$op" /proc/cpuinfo)


echo "$value"
