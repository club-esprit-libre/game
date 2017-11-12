#!/bin/bash
#
# set "THE_USER" to SUDO_USER if that's set,
#  else set it to USERNAME if THAT is set,
#   else set it to the string "unknown"
# should probably then test to see if it's "unknown"

THE_USER=${SUDO_USER:-${USERNAME:-unknown}}

sudo -s ${THE_USER} 
cd ~/Documents 
ls
mkdir nn
ls 
rm -rf nn
ls  
gedit  commande.sh
#sudo -u ${THE_USER} 
# etc.
