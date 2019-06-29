# Software Ontwikkeling #
-------------------------

This project is a simple template that students can use for the assignment of the Software Development course.

## Build status
| Branch  | Status                                                                                                                                                                       |
| ------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Master  | [![Run Status](https://api.shippable.com/projects/5cd2bb09b42e400007bd42c1/badge?branch=master)](https://app.shippable.com/github/vesofton/Software-Ontwikkeling/dashboard)  |

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

In order to flash and run this project with Atollic, the following options can be used:
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

## Shippable/Doxygen ##

Shippable uses the script 'deploy_to_github.sh' in order to create a new branch named 'doxygen_output' and  
pushes the generated doxygen files to it. To make this work, the deployment key from shippable should be added  
to the GitHub repository. This can be done in the profile settings under SSH and GPG keys.

## Building the project ###

This repository cantains a Makefile which can compile and build the source code.
To use this Makefile, the following commands can be used in a terminal:
```
* make       - Displays help dialog
* make all   - Run 'make clean', 'make build_work' and 'make build_qualification' respectively
* make clean - Run 'make clean_work' and 'make clean_qualification' respectively
* make build_work - Compile the source code for the 'work' project
* make clean_work - Clean the source code for the 'work' project
* make build_qualification - Compile the source code for the 'qualification' project
* make clean_qualification - Clean the source code for the 'qualification' project
```

## Running the tests ##

A few sample unit tests are implemented in the 'Qualification' project. This project is linked to the 'work' project and 
can test the function that are defined in the 'work' project. To run the test execute the executable found in the 
'/Qualification/Debug/' directory or enter the following command in a terminal:
```
* ./qualification/Debug/Qualification.exe
```



## Authors ##

**Henrico Brom**

Third-year student Electrical Engineering at the Utrecht University of Applied Sciences  

Henrico.brom@student.hu.nl  
05-02-2019  

## Acknowledgements ##
* Franc van der Bent  (Teacher at Hogeschool Utrecht)
* Michiel Scager      (Teacher at Hogeschool Utrecht)
* Jeroen de Bruijn    (Graduated student from Hogeschool Utrecht)

