// printf use in go, Printf
package main

import "fmt"

type person struct {
	name  string
	age   int
	score float64
}

var people = []person{
	person{"Tom Jones", 34, 45.9934},
	person{"Sam Neal", 15, -30.9111},
	person{"Janus William Sampson", 67, 89.12567},
	person{"Mary Smart", 25, 45.123},
	person{"Yoda A. Jedi", 981, 223.4},
}

func main() {
	for i := 0; i < len(people); i++ {
		name := people[i].name
		age := people[i].age
		score := people[i].score
		fmt.Printf("%s\t%d\t%f\n", name, age, score) // generic formats with no specs
	}
}

/* demo these lines
   fmt.Printf("%s\t%d\t%f\n", name, age, score); // generic formats with no specs
   fmt.Printf("name:%s   age:%d   score:%f\n", name, age, score); // nice for debugging
   fmt.Printf("%18s%3d%10f\n", name, age, score); // fixed column widths
   fmt.Printf("%21s %3d %10f\n", name, age, score); // fixed column widths, added spaces
   fmt.Printf("%21s %-3d %10f\n", name, age, score); // left justify age with -
   fmt.Printf("%21s %3d %10.3f\n", name, age, score); // %10.3f sets 3 decimal places for score
   fmt.Printf("%21s %3d $%.2f\n", name, age, score); // if score were a dollar amount, remove width
   fmt.Printf("%21s %3d $%7.2f\n", name, age, score); // add a width to line up decimals
*/
