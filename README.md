# LSD_C_LAB
This repository contain the exercises corrections of our C_LAB sessions :

# HOW TO USE THE SOLUTION

## Requirements
First you will need GCC and GIT to be installed on your machine.
Use this command to install GIT on Ubuntu:
```shell
> sudo apt install git
```
Use this command to install GCC on Ubuntu:
```shell
> sudo apt install build-essential
```
Manual pages about using GNU (additional):
```shell
> sudo apt-get install manpages-dev
```
## Follow these steps to use the exercises solutions
Use the command below to clone the repository to your local machine:
```shell
> git clone https://github.com/rakati/LSD_C_LAB.git
```
Then go to the correction folder olf the first exercice using this command :
```shell
> cd LSD_C_LAB/TP1
```
Now just compile the file using GCC with the following command :
```shell
> gcc exercise_1a.c -o ex1a
```
Start the program and enter the requested information :
```shell
> ./ex1a
Enter the size of the matrix: 3
Filling the matrix A
A[0][0] = 4
A[0][1] = 0
A[0][2] = 0
A[1][0] = 2
A[1][1] = 3
A[1][2] = 0
A[2][0] = 8
A[2][1] = 6
A[2][2] = 1
Filling the matrix B
B[0] = 1
B[1] = 2
B[2] = -3
```
The result will be :
```shell
> The resulting vector: [0.250000,0.500000,-8.000000]
```
