# Even Numbers Only

A simple C program that iterates from 1 to 20 and prints only the even numbers to the console. This project is an exercise in using loops and conditional control flow.

---

## Requirements

1. The program must use a `for` loop to iterate through numbers from 1 to 20.
2. A conditional `if` statement must be used.
3. The `continue` keyword must be used to skip the logic for odd numbers.
4. The final output must be a single line of space-separated even numbers.

---

## Algorithm (Plan)

This describes the logic of the `main` function before writing the code.

1. Start the `main` function.
2. Create a `for` loop with an integer `i` that starts at 1, continues as long as `i <= 20`, and increments `i` by 1 on each iteration.
3. **Inside the loop:**
    a. Check if `i` is odd. The condition for this is `i % 2 != 0`.
    b. **If `i` is odd:**
        i. Execute the `continue` statement to immediately proceed to the next iteration of the loop.
    c. **If `i` is not odd (i.e., it's even):**
        i. Print the value of `i`.
        ii. Print a space character " " immediately after the number.
4. **After the loop finishes:**
    a. Print a newline character `\n` to ensure the command prompt starts on a new line.
5. Return 0 to indicate successful execution.

---

## How to Compile and Run

This program can be compiled with a standard C compiler like `gcc`.

1. **Compile the program:**

    ```bash
    gcc main.c -o even_numbers
    ```

2. **Run the executable:**

    ```bash
    ./even_numbers
    ```

    *(On Windows, you might just run `even_numbers.exe`)*

---

## Expected Output

When run, the program will produce the following output to the console:

``
2 4 6 8 10 12 14 16 18 20
``
