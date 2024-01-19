prog1: prog1.o
	gcc -o prog1 prog1.o &> /dev/null 
prog1.o: prog1.c
	gcc -c prog1.c &> /dev/null
prog2: prog2.o
	gcc -o prog2 prog2.o &> /dev/null 
prog2.o: prog2.c
	gcc -c prog2.c &> /dev/null
prog3: prog3.o
	gcc -o prog3 prog3.o &> /dev/null 
prog3.o: prog3.c
	gcc -c prog3.c &> /dev/null
swap0: swap0.o
	gcc -o swap0 swap0.o &> /dev/null 
swap0.o: swap0.c
	gcc -c swap0.c &> /dev/null
swap1: swap1.o
	gcc -o swap1 swap1.o &> /dev/null 
swap1.o: swap1.c
	gcc -c swap1.c &> /dev/null
stat: stat.o
	gcc -o stat stat.o &> /dev/null 
stat.o: stat.c
	gcc -c stat.c &> /dev/null
clean:;	rm -f ./*.o ./prog1 ./prog2 ./prog3 ./swap0 ./swap1 ./stat
showprog1:;	clear;/Users/mat/Documents/MyFiles/pointer/progs/prog1;cat prog1.c
showprog2:
	clear;/Users/mat/Documents/MyFiles/pointer/progs/prog2;cat prog2.c
showprog3:
	clear;/Users/mat/Documents/MyFiles/pointer/progs/prog3;cat prog3.c
showswap0:
	clear;/Users/mat/Documents/MyFiles/pointer/progs/swap0;cat swap0.c
showswap1:
	clear;/Users/mat/Documents/MyFiles/pointer/progs/swap1;cat swap1.c
showstat:
	clear;/Users/mat/Documents/MyFiles/pointer/progs/stat;cat stat.c
