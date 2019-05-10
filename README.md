# Software Ontwikkeling #
-------------------------

This project is a simple template that students can use for the assignment of the Software Development course.

## Build status
| Branch  | Status                                                                                              |
| ------- | --------------------------------------------------------------------------------------------------- |
| Master  | [![Run Status](https://api.shippable.com/projects/5cd2bb09b42e400007bd42c1/badge?branch=master)]()  |

## Getting Started ##

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites ###

The following tools are required in order to build and run this project:
```
* Atollic TrueStudio for STM32
* GIT (e.g. GitHub)
* Shippable
```

### Installing ###

Before building and running the software, this repository should be setup with GIT and Shippable.

In order to flash and run this project with Atollic, the following options should be used:
* Option 1, Debug:

Use the Debug button within Atollic to flash and debug the project on the ARM

* Option 2, Run:

Install [STSW-LINK004](https://www.st.com/en/development-tools/stsw-link004.html) from STMicroElectronics and perform the following:
```
* Go to Run > External Tools > External Tools Configurations
* Right-click on Program > New
* Set Location and Working directory to ST-LINK_CLI.exe
* Set arguments to:
-c SWD -P ${project_loc}\${config_name:${project_name}}\${project_name}.hex -Rst
* Apply and Exit
* Open Run > Run Configurations...
* Right-click on Launch Group > New
* Add... > choose external tool you've just created for ST-LINK_CLI.exe
* Apply and Exit
```
The project should now be configured to flash and run it.

![picture alt](http://thundertronics.com/wp-content/uploads/2018/07/flashandrun.png "Flash and Run configurations")

## Building the project ###

This repository cantains a Makefile which can compile and build the source code.
To use this Makefile, the following commands should be used:
```
* make       - Displays help dialog
* make clean - Removes all generated files
* make build - Builds the source code
* make all   - Executes 'make clean' and 'make build' respectively
```

## Running the tests ##

No tests are implemented yet.

## Authors ##

**Henrico Brom**

Third-year student Electrical Engineering at the Utrecht University of Applied Sciences  

Henrico.brom@student.hu.nl  
05-02-2019  

## Acknowledgements ##
* Franc van der Bent  (Teacher at Hogeschool Utrecht)
* Michiel Scager      (Teacher at Hogeschool Utrecht)
* Jeroen de Bruijn    (Graduated student from Hogeschool Utrecht)

