#!/usr/bin/awk -f
BEGIN{FS=":"} $1 ~ /^m/ && NR <= 115 {print $5}
