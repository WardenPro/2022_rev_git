# 2022_rev_git
reverse lines characterwise  
The rev utility copies the specified files to standard output, reversing the order of characters in every line.  
Ifno files are specified, standard input is read.  
This utility is a line-oriented tool and it uses in-memory allocated buffer for a whole wide-char line.  
If theinput file is huge and without line breaks than allocate the memory for the file may be unsuccessful.
