ADD = 1
SUB = 1
DEBUG = 1

ifdef ADD
cc_FLAG = -DADD
endif

ifdef SUB
cc_FLAG += -DSUB
endif

ifdef DEBUG
cc_FLAG += -g
endif

cc = gcc  
all : Calculator
	echo "Build done"

#Calculator : main.o
#	gcc main.o -L ../lib/ -l Calculator -o../bin/Calculator 

#main.o : main.c
#	gcc ${cc_FLAG} -I ../inc -c main.c

Calculator : main.o add/add.o sub/sub.o
	gcc main.o add.o sub.o -o ../bin/Calculator
  
main.o : main.c
	gcc -c ${cc_FLAG} main.c

add/add.o : add/add.c
	gcc -c add/add.c
 
sub/sub.o : sub/sub.c
	gcc -c sub/sub.c
  
clean :
	rm *.o ../bin/Calculator
  
install : 
	sudo cp ../bin/Calculator/bin
