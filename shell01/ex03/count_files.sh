#!/bin/sh
FILECOUNT=$(find . -type f | wc -l)
DIRCOUNT=$(find . -type d | wc -l)
TOTAL_FILES=$((FILECOUNT+DIRCOUNT))
echo $TOTAL_FILES
