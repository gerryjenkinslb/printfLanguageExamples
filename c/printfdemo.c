// printdemo.c
#include <stdio.h>
#include "printfdemo.h"

void print_line(char *name, int age, double score) {
  printf("%s\t%d\t%f\n", name, age, score); // generic formats with no specs
}


/* demo these lines
  printf("%s\t%d\t%f\n", name, age, score); // generic formats with no specs
  printf("name:%s   age:%d   score:%f\n", name, age, score); // nice for debugging
  printf("%18s%3d%10f\n", name, age, score); // fixed column widths
  printf("%21s %3d %10f\n", name, age, score); // fixed column widths, added spaces
  printf("%21s %-3d %10f\n", name, age, score); // left justify age with - 
  printf("%21s %3d %10.3f\n", name, age, score); // %10.3f sets 3 decimal places for score
  printf("%21s %3d $%.2f\n", name, age, score); // if score were a dollar amount, remove width
  printf("%21s %3d $%7.2f\n", name, age, score); // add a width to line up decimals
*/

// demo of printf variation in c as part of "printf across languages"
// (C) Copyright 2017 Gerry W. Jenkins