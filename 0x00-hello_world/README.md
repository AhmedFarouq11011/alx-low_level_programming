0-preprocessor adding gcc -E will make gcc preprocess unlike adding gcc only which will give the file the a.out name  as the default <br/>
	gcc -o filename.c excutionable_file
<br/>
1-compiler adding gcc -c filename.c will generate an object file filename.o but not an excutable one
<br/>
2-assembler adding gcc -S filename.c creates an assemly file
<br/>
3-name adding gcc -o outputname inputname.c creates an excutable file
<br/>
4-puts puts("string"); this is used to print a string like printf but only works if u add a string
<br/>
5-printf printf("sentence\n"); this will also print however you need to specify the new line character yourself
<br/>
6-size the trick printf("something %lu",sizeof(int)); sizeof return the size as an unsigned long integer %ul is a placeholder fot that type
<br/>
7- 
101-quote // write(STDERR_FILENO, and that piece of art is useful" - Dora Korpar, 2015-10-19n, 59);STDERR_FILENO is the 3rd stream in unix system stdin stdout stderr after that is the text it self and then the length of the string we added
100-print_comb3 // trick is 2 nested loops the inner l;oop always outer+1 
