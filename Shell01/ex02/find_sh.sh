#!/bin/bash

find . -type f -name "*.sh" -exec basename {} .sh \;

#ARQUIVO=`find . -name "*.sh"` ; basename -s .sh $ARQUIVO
