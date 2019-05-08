
.PHONY: all


help:
	@echo -e "To use this Makefile, the following commands should be used:\
	\n\tmake clean: Remove all generated files while building\
	\n\tmake build: Compile and build source code\
	\n\tmake all  : Execute 'make clean' and 'make build' respectively"


all: clean build


clean:
	cd work && make clean

build:
	cd work && make all
