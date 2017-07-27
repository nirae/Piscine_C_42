#! /bin/sh
cat $1 | grep ^Nicolas | grep Bauer | cut -f 3
