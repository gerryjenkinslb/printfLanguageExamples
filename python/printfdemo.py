def printline(name, age, score):
    print("%s\t%d\t%f" % ( name, age, score))  # generic formats with no specs

# demo these lines
def holder(): # just holding lines of code for me
      print("%s\t%d\t%f\n" % ( name, age, score))  # generic formats with no specs
      print("name:%s   age:%d   score:%f\n" % ( name, age, score))  # nice for debugging
      print("%18s%3d%10f\n" % ( name, age, score))  # fixed column widths
      print("%21s %3d %10f\n" % ( name, age, score))  # fixed column widths, added spaces
      print("%21s %-3d %10f\n" % ( name, age, score))  # left justfy age with - 
      print("%21s %3d %10.3f\n" % ( name, age, score))  # %10.3f sets 3 decimal places for score
      print("%21s %3d $%.2f\n" % ( name, age, score))  # if score were a dollar amount, remove width
      print("%21s %3d $%7.2f\n" % ( name, age, score))  # add a width to line up decimals
  
people = [
    ["Tom Jones", 34, 45.9934],
    ["Sam Neal", 15, -30.9111],
    ["Janus William Sampson", 67, 89.12567],
    ["Mary Smart", 25, 45.123],
    ["Yoda A. Jedi", 981, 223.4],
]

# main
if __name__ == "__main__":
    for person in people:
        printline(*person)




# demo of printf variation in python as part of "printf across languages"
# (C) Copyright 2017 Gerry W. Jenkins
