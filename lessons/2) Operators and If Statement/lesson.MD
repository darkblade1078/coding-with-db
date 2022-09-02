
# Operators and If statements

Today we will be covering what operators do and how they can benefit us, look into ways of altering the outcome of our code with if statements,
and going more indepth on what variables can do.

Let's jump into it!!!!


## Operators
What is an operator? Well it essentially provide logic and specific mathematical operations.
Here are some of operators you will see.

### If statement operators
**==**: returns true or false if the data is equal too the result, Example: (number == 4)

**===**: returns true or false if the data is equal too the exact data type and result, Example: (number === 4)

**!=**: returns true or false if the data is not equal to the result, Example: (number != 4)

**<**: returns true or false if the data is less than the result, Example: (number < 4)

**>**: returns true or false if the data is greater than the result, Example: (number > 4)

**>=**: returns true or false if the data is equal too or greater than the result, Example: (number >= 4)

**<=**: returns true or false if the data is equal too or less than the result, Example: (number <= 4)

#### **For multiple statements**
**||** it's pretty much or. If you use it, it will run the code if either condition is met.

**&&** it's pretty much and. If you use it, it will run the code if both conditions are met.

### Math Equations
**+**: it's basically addition, Example: (4 + 4), result: 8

**-**: it's basically subtraction, Example: (4 - 4), result: 0

*: it's basically multiplication, Example: (4 * 4), result: 16

**/**: it's basically divison, Example: (4 / 4), result: 1

**++**: increases the number by 1, Example: 4++, result: 5

**--**: decreases the number by 1, Example: 4--, result: 3

#### **use these for variables**
**+=**: adds the number ontop of whatever the variable has, Example int bob = 5, bob += 5, output 10

**-=**: removes the number ontop of whatever the variable has, Example int bob = 5, bob -= 5, output 10

#### **You can use equations to setup variables**
You can do much more with variables than just give a number, you can also have an equation and have the result be the variable.
So if you want to save the result of let's say 10 + 10, it's as simple as setting up the variable and equation. You can also use equations with variables.

### C++
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015358269767819345/unknown.png?size=4096)

### Java
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015356260767502478/unknown.png?size=4096)

### Typescript
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015370414681227345/unknown.png?size=4096)
## If Statements
So the most basic way of changing the results of your code is with If Statements. 
If statements essentially take a statement and run code if that statement is true.
If the statement is true, then it will run the code inside the braces.

### C++
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015368032832467047/unknown.png?size=4096)

### Java
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015368628671107092/unknown.png?size=4096)

### Typescript
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015370552791289916/unknown.png?size=4096)

## else statements and else if statements
Now in the case that you want different code to run in case the if statement is false, you have else and else if statements.
The else statement is used last in a if statement. Because if none of the if statement conditions are true, the you want a default condition.
Else if will run if the condition of the if statement before it is false and the statement for this one is true.


### C++
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015368188520841346/unknown.png?size=4096)

### Java
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015368770761523200/unknown.png?size=4096)

### Typescript
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015370647687405648/unknown.png?size=4096)

## && and ||
In the case you want to check if multiple conditions meet or if one of them meet, then && and || operators will help you with that.
&& will check and see if all conditions are true, if one is false, it will not run.
|| will check and see if one of the conditions meet, if one does, it will run.

### C++
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015368519724056637/unknown.png?size=4096)

### Java
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015370235072753785/unknown.png?size=4096)

### Typescript
![](https://cdn.discordapp.com/attachments/1012397272874619041/1015370800372654171/unknown.png?size=4096)

## Homework
While it's a little early to give homework, i think dipping your toes in now will be a good start.
So for your first homework assignment, I want you to make a program that will tell you how big an nation's military can be based on city count.

**I want:**
- Max soldiers
- Max tanks
- Max aircraft
- Max Ships

You will make a variable that contains your city count, soldiers, tanks, and etc and display them each variable onto the screen.
And you will use the resources given to you by the website and the wiki on how the max of each unit is calculated.
It must be able to accurately display the max amount of each unit if i change the the city count variable.