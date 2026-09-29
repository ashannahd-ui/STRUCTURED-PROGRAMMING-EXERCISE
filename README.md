# STRUCTURED-PROGRAMMING-EXERCISE
C FILES
This repository contains 8 programs demonstrating structured programming concepts from basic output to interactive programs.

---

### Exercise 1 - Basic Output
**Category:** 01_basic_output
**Source:** Deitel & Deitel, Chapter 2, Exercise 2.3
**What the program does:** The program prints a simple 'this is a c program' on the same line, on different lines and with tabs
**Concepts used:** `printf` function, `main` function, newline character `\n` and tabs`\t`.
**How it works:** The program calls 'printf' four times. Each following the instructions given. Execution ends.
**Example run:**This is a C program.
### Exercise 2 - Input, Process, Output
**Category:** 02_input_process_output
**Source:** Deitel & Deitel, Chapter 2, Exercise 2.16 (Comparing Integers)
**What the program does:** Asks the user for two integers and compares them to find sum ,product, quocient, difference and remainder.
**Concepts used:** `scanf`, `printf`, variables.
**How it works:** Reads two integers a and b. 
**Example run:**Enter two integers: 2 and 3
sum = 5
product = 6
difference = 1
quocient = 1
remainder = 1
### Exercise 3 - Decisions
**Category:** 03_decisions
**Source:** Deitel & Deitel, Chapter 2, Exercise 2.22 (Even or Odd)
**What the program does:** Checks if a number entered by user is even or odd.
**Concepts used:** `if...else`, modulus operator `%`, `scanf`.
**How it works:** Reads an integer. Calculates number % 2. If remainder is 0, it is even. Otherwise it is odd.
**Example run:**Enter an integer: 10
10 is even.
Enter an integer: 7
7 is odd.
### Exercise 4 - Basic Loop
**Category:** 04_basic_loop
**Source:** Deitel & Deitel, Chapter 3, Exercise 3.2 (Counter-controlled repetition)
**What the program does:** Prints numbers from 1 to 10 using a loop.
**Concepts used:** `while` loop, counter variable, increment.
**How it works:** Initialize counter to 1. While counter <= 10, print counter and add 1 to counter. Loop stops after 10.
**Example run:**1
2
3
4
5
6
7
8
9
10
### Exercise 5 - Loop with Calculation
**Category:** 05_loop_calculation
**Source:** Deitel & Deitel, Chapter 4, Exercise 4.11 (Sum of multiples of 7)
**What the program does:** Calculates the sum of all multiples of 7 from 1 to 100.
**Concepts used:** `for` loop, `if` with modulus `%`, accumulation `sum += i`.
**How it works:** Loop runs from 1 to 100. For each number, it checks if i % 7 == 0. If true, adds it to sum. Finally prints sum.
**Example run:**Sum of multiples of 7 from 1 to 100 is 735
### Exercise 6 - Loop with User Input
**Category:** 06_loop_input
**Source:** Deitel & Deitel, Chapter 3, Exercise 3.23 (Find the Largest Number)
**What the program does:** Asks user to enter 10 non-negative numbers and finds the largest.
**Concepts used:** `while` loop, `scanf` inside loop, decision inside loop.
**How it works:** Loop runs 10 times. Each iteration reads a number. If number > largest, largest becomes number. At the end prints largest.
**Example run:**Enter number 1: 5
Enter number 2: 89
Enter number 3: 12
Enter number 4: 90
...
Largest is 90
### Exercise 7 - Loop with Decision
**Category:** 07_loop_decision
**Source:** Deitel & Deitel, Chapter 3, Exercise 3.22 (Prime Number)
**What the program does:** Checks if a number entered is a prime number.
**Concepts used:** `for` loop, `%` operator, counter variable, `if...else`.
**How it works:** If number <=1, not prime. Else loop from 2 to number-1. If number is divisible by any i, increase count. If count stays 0, it is prime.
**Example run:**Enter a number: 7
7 is prime
Enter a number: 10
10 is not prime
### Exercise 8 - Interactive Program
**Category:** 08_interactive_program
**Source:** Deitel & Deitel, Chapter 3, Exercise 3.24 (Two Largest Numbers) - Also 3.20 Salary Calculator fits this category
**What the program does:** Finds the two largest numbers out of 10 numbers entered. The program continues to interact until all 10 are entered.
**Concepts used:** Sentinel? Counter-controlled while, nested if, multiple variables tracking.
**How it works:** Loop 10 times reading input once per iteration. If number > largest, move old largest to secondLargest and update largest. Else if number > secondLargest, update secondLargest only. Prints both at end.
**Example run:**Enter number 1: 5
Enter number 2: 89
Enter number 3: 12
Enter number 4: 90
Enter number 5: 33
Largest is 90
Second largest is 89
