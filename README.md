# Municipal Financial Management System

## Week 9 Laboratory – Modularise the MFMS

This project demonstrates a multi-file Municipal Financial Management System written in C.

## Modules

- `main.c` - Controls the main program and menu.
- `employees.c` - Contains employee functions.
- `employees.h` - Contains employee function declarations.
- `budget.c` - Contains budget functions.
- `budget.h` - Contains budget function declarations.
- `utilities.c` - Contains reusable input and helper functions.
- `utilities.h` - Contains utility function declarations.
- `reports.c` - Contains report functions.
- `reports.h` - Contains report function declarations.

## Compilation

Each source file can be compiled separately using:

gcc -std=c99 -Wall -Wextra -pedantic -c main.c
gcc -std=c99 -Wall -Wextra -pedantic -c employees.c
gcc -std=c99 -Wall -Wextra -pedantic -c budget.c
gcc -std=c99 -Wall -Wextra -pedantic -c utilities.c
gcc -std=c99 -Wall -Wextra -pedantic -c reports.c

The object files are then linked using:

gcc main.o employees.o budget.o utilities.o reports.o -o mfms

The program can be run using:

./mfms