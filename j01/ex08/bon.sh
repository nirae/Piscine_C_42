#! /bin/sh
ldapsearch -LLL -Q "(sn=*bon*)" sn | egrep ^sn | wc -l | tr -d "    "
