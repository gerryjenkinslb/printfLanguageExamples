// printf in java is the static format method of built in String class

public class PrintfDemo {

  public static void print_line(String name, int age, double score) {
    System.out.print(String.format("%s\t%d\t%f\n", name, age, score)); // generic formats with no specs
  }  
  
  static class Person {  // inner class for mixed data 
    String name; 
    int age; 
    double score; 
    
    public Person(String name, int age, double score) {
      this.name = name;
      this.age = age;
      this.score = score;
    }
  } 
  
  public static void main(String [] args) {
    Person [] people = {
      new Person("Tom Jones", 34, 45.9934),
      new Person("Sam Neal", 15, -30.9111),
      new Person("Janus William Sampson", 67, 89.12567),
      new Person("Mary Smart", 25, 45.123),
      new Person("Yoda A. Jedi", 981, 223.4),      
    };

    for( Person p: people) {
      print_line(p.name, p.age, p.score);
    }
  }

/* demo these lines
   System.out.print(String.format("%s\t%d\t%f\n", name, age, score)); // generic formats with no specs
   System.out.print(String.format("name:%s   age:%d   score:%f\n", name, age, score)); // nice for debugging
   System.out.print(String.format("%18s%3d%10f\n", name, age, score)); // fixed column widths
   System.out.print(String.format("%21s %3d %10f\n", name, age, score)); // fixed column widths, added spaces
   System.out.print(String.format("%21s %-3d %10f\n", name, age, score)); // left justfy age with -
   System.out.print(String.format("%21s %3d %10.3f\n", name, age, score)); // %10.3f sets 3 decimal places for score
   System.out.print(String.format("%21s %3d $%.2f\n", name, age, score)); // if score were a dollar amount, remove width
     System.out.println(String.format("%21s %3d $%7.2f\n", name, age, score); // add a width to line up decimals
*/

  
  
}