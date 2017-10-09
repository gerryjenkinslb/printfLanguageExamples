#include <stdio.h>
#include "printfdemo.h"

int main() {
    struct person {
        char* name;
        int age;
        double score;
    };

    struct person people[] = {
        {"Tom Jones", 34, 45.9934},
        {"Sam Neal", 15, -30.9111},
        {"Janus William Sampson", 67, 89.12567},
        {"Mary Smart", 25, 45.123},
        {"Yoda A. Jedi", 981, 223.4},
    };
    
    int n = sizeof(people) / sizeof(struct person);
    for(int i = 0; i < n; i++) { 
       struct person p = people[i];
       print_line(p.name, p.age, p.score);
   }

   return 0; 
}

/* gcc -Wall printloop.c printfdemo.c -o printfdemo */
