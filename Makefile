help:
	$(info )
	$(info Makefile help)

all: hello.out
 
hello.out: hello.c
	gcc hello.c -o hello.out

clean:
	rm -rf hello.out