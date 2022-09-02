let number1: number = 10;
let number2: number = 25;

// can use the result of an equation as an variable
let result1: number = 10 * 5;

// can use variables as well
let result2: number = number1 + number2;

// statement is true since number1 is equal too number1
if (number1 == number1) {
  console.log("it works");
}

// is true because number1 and number2 is equal to 25
if (number1 + number2 == 35) {
  console.log("it's true");
}

// is false because number1 is not equal to 11
if (number1 == 11) {
  console.log("it's not true");
}

// is false because result1 does not equal to 49
if (result1 == 49) {
  console.log("this is the if statement");
}
// since the first statement did not pass, it will run this one
else {
  console.log("this is the else statement");
}

// false because result1 is not equal to 49
if (result1 == 49) {
  console.log("first if");
}

// this will run because if statement 1 failed and result1 and result2 are equal to 35 and 50
if (result1 == 35 && result2 == 50) {
  console.log("second if");
}
// this statement will not run since if statement 2 is true
else {
  console.log("else statement");
}
