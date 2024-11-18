### [README.md](http://readme.md/)

---

## **Project Overview**

This project includes two C++ programs, "index.cpp" and "app.cpp," designed for simple array-based operations:

1. **index.cpp**:
    - A program that processes an array and separates the even and odd numbers.
    - Outputs the even and odd numbers in distinct groups.
2. **app.cpp**:
    - A program that identifies prime numbers in an array.
    - Additional functionalities include:
        - Storing all prime numbers in a new array (`primeArray`).
        - Finding the maximum and minimum numbers in the `primeArray`.
        - Calculating the sum of all numbers in the `primeArray`.

---

## **Answers to Both Codes**

### **index.cpp (Odd and Even Numbers)**

- **Purpose**: To segregate and display even and odd numbers from a given array.
- **Method**:
    - Loops through the array.
    - Checks each element for even/odd using modulus (`%`) operator.

### **app.cpp (Prime Numbers and Operations)**

- **Purpose**: To identify prime numbers in an array and perform operations on them.
- **Method**:
    - Checks each number for primality using a helper function `isPrime()`.
    - Stores all prime numbers in `primeArray`.
    - Finds maximum and minimum using `max_element()` and `min_element()`.
    - Computes the sum of primes using `accumulate()`.

---

## **Expected Outputs**

### **index.cpp**

**Input Array**: `{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}`

**Expected Output**:

```
Even numbers: 2 4 6 8 10
Odd numbers: 1 3 5 7 9

```

### **app.cpp**

**Input Array**: `{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 17}`

**Expected Output**:

```
Prime numbers: 2 3 5 7 11 13 17
Maximum prime: 17
Minimum prime: 2
Sum of primes: 58

```

---

## **How to Run the Programs**

1. Compile the C++ programs using a standard compiler (e.g., `g++`).
2. Run the executable and observe the output for the respective programs.

---

This project demonstrates fundamental concepts like loops, conditionals, and mathematical logic in C++.