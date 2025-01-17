# numberGuesser Pseudocode
create true and false constants
creat int for answer
create int for guess
create int for attempts, start at 0


print a statement asking the user for their name
take the user's input and store it in the variable "userName"
print a statement greeting the user by name
print an explanation of the game
generate a random number between 1 and 100 
save the random number in the variable "answer"
set keepGoing to true
create a variable called attempts, set to 0
start while loop, sentry variable is keepGoing
  add 1 to attempts
  print the number of attempts and the statement "Guess a number: "  
  take the user's input and store it in the variable "guess"
  if guess is greater than answer, print "Too high"
  else if guess is lower than answer, print "Too low"
  else if guess is equal to answer
    set keepGoing to false
    if attempts is less than 7, print "Great job"    
    else if attempts is equal to 7, print "You did okay"
    else if attempts is greater than 7, print "You didn't do too good"



