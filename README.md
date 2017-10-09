# printfLanguageExamples
Examples of text formatting with printf like format codes across different languages.

This repository has an working example of using printf or sprintf type output formating in several languages. Each example is simular to this on in php:

```php
<?php // a cli php printf demo  (cli - command line interface)

function print_line($name, $age, $score) {
  printf("%s\t%d\t%f\n", $name, $age, $score); // generic formats with no specs
}

$people = array(
    array("Tom Jones", 34, 45.9934),
    array("Sam Neal", 15, -30.9111),
    array("Janus William Sampson", 67, 89.12567),
    array("Mary Smart", 25, 45.123),
    array("Yoda A. Jedi", 981, 223.4),  
);

// do main here
foreach( $people as $p) {
  print_line($p[0], $p[1], $p[2]);
}

/* demo these lines
    printf("%s\t%d\t%f\n", $name, $age, score); // generic formats with no specs
    printf("name:%s   age:%d   score:%f\n", $name, $age, score); // nice for debugging
    printf("%18s%3d%10f\n", $name, $age, score); // fixed column widths
    printf("%21s %3d %10f\n", $name, $age, score); // fixed column widths, added spaces
    printf("%21s %-3d %10f\n", $name, $age, score); // left justfy age with - 
    printf("%21s %3d %10.3f\n", $name, $age, score); // %10.3f sets 3 decimal places for score
    printf("%21s %3d $%.2f\n", $name, $age, score); // if score were a dollar amount, remove width
    printf("%21s %3d $%7.2f\n", $name, $age, score); // add a width to line up decimals
*/
?>
```
The printf statent near top, is meant to be replaced with variation list near bottom one line at a time to see effects of format codes.

Each language will create the same basic structure of data to loop though and then use the one printf near tom to convert to output.

I demo this at this youtube video:  xxxx
on my channel: xxx
```php
<?php // a cli php printf demo  (cli - command line interface)

function print_line($name, $age, $score) {
  printf("%s\t%d\t%f\n", $name, $age, $score); // generic formats with no specs
}

$people = array(
    array("Tom Jones", 34, 45.9934),
    array("Sam Neal", 15, -30.9111),
    array("Janus William Sampson", 67, 89.12567),
    array("Mary Smart", 25, 45.123),
    array("Yoda A. Jedi", 981, 223.4),  
);

// do main here
foreach( $people as $p) {
  print_line($p[0], $p[1], $p[2]);
}

/* demo these lines
    printf("%s\t%d\t%f\n", $name, $age, score); // generic formats with no specs
    printf("name:%s   age:%d   score:%f\n", $name, $age, score); // nice for debugging
    printf("%18s%3d%10f\n", $name, $age, score); // fixed column widths
    printf("%21s %3d %10f\n", $name, $age, score); // fixed column widths, added spaces
    printf("%21s %-3d %10f\n", $name, $age, score); // left justfy age with - 
    printf("%21s %3d %10.3f\n", $name, $age, score); // %10.3f sets 3 decimal places for score
    printf("%21s %3d $%.2f\n", $name, $age, score); // if score were a dollar amount, remove width
    printf("%21s %3d $%7.2f\n", $name, $age, score); // add a width to line up decimals
*/
?>
```
The printf statent near top, is meant to be replaced with variation list near bottom one line at a time to see effects of format codes.

Each language will create the same basic structure of data to loop though and then use the one printf near tom to convert to output.

I demo this at this youtube video:  xxxx
on my channel: xxx
