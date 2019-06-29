
.PHONY: all


help:
	@echo -e "\nTo use this Makefile, the following commands should be used:\n\
	\n\tmake all  : Run 'make clean', 'make build_work' and 'make build_qualification' respectively\
	\n\tmake clean: Run 'make clean_work' and ' make clean_qualification' respectively\n\
	\n\tmake build_work: Compile the source code for the work project\
	\n\tmake clean_work: Clean the source code for the work project\n\
	\n\tmake buikd_qualification: Compile the source code for the qualification project\
	\n\tmake clean_qualification: Clean the source code for the qualification project"


all: clean build_work build_qualification

clean: clean_work clean_qualification


build_work:
	cd work && make all

clean_work:
	cd work && make clean


build_qualification:
	cd qualification/Debug && make all

clean_qualification:
	cd qualification/Debug && make clean
