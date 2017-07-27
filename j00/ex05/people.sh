#! /bin/sh
ldapsearch -Q "uid=z*" | grep -E ^cn: | cut -c 5- | sort -rf
