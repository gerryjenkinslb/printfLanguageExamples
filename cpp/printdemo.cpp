// C++ printf demo, basically same as C but with important include and addition of const
#include <cstdio> // you need this library to use printf and sprintf

void print_line(const char *name, const int age, const double score) {
  printf("%s\t%d\t%f\n", name, age, score); // generic formats with no specs
}

int main() {
    struct person {
        const char* name;
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

// compile with
// gcc -Wall printdemo.cpp -o printdemo
// run with
// ./printdemo

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