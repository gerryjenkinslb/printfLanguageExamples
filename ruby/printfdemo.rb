
def printLine(name, age, score)
  printf "%s\t%d\t%f\n", name, age, score  #  generic formats with no specs
end


people = [ # mixed array types allowed in ruby
	["Tom Jones", 34, 45.9934],
	["Sam Neal", 15, -30.9111],
	["Janus William Sampson", 67, 89.12567],
	["Mary Smart", 25, 45.123],
	["Yoda A. Jedi", 981, 223.4],
]

# Program Execution starts here
people.each do |person| 
  printLine(person[0], person[1], person[2])
end

demo_statements = <<-EOF
  printf "%s\t%d\t%f\n", name, age, score  #  generic formats with no specs
  printf "name:%s   age:%d   score:%f\n", name, age, score  #  nice for debugging
  printf "%18s%3d%10f\n", name, age, score  #  fixed column widths
  printf "%21s %3d %10f\n", name, age, score  #  fixed column widths, added spaces
  printf "%21s %-3d %10f\n", name, age, score  #  left justify age with -
  printf "%21s %3d %10.3f\n", name, age, score  #  %10.3f sets 3 decimal places for score
  printf "%21s %3d $%.2f\n", name, age, score  #  if score were a dollar amount, remove 
  EOF