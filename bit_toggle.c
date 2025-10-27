/*
2. Bit Toggle
Write a C program to toggle the 5th bit (0-based index) of a given integer.
    The program should take an integer N as input.
    It should toggle the 5th bit of N (i.e., flip the bit at position 5: if 0, make it 1; if 1, make it 0).
Note: The 5th bit is at position 5(0-based indexing). For example, in the binary number 100100, the 5th bit is 1.

Example
Input: 10
    Explanation:
    Binary representation of 10 is 00001010.
    Toggling the 5th bit (position 5) results in 00101010, which is 42 in decimal.
    Expected Output: 42

Input: 31
    Explanation:
    Binary representation of 31 is 00011111.
    Toggling the 5th bit (position 5) results in 00111111, which is 63 in decimal.
    Expected Output: 63
 
Input: 0
    Explanation:
    Binary representation of 0 is 00000000.
    Toggling the 5th bit (position 5) results in 00100000, which is 32 in decimal.
    Expected Output: 32
*/

#include <stdio.h>

int toggleFifthBit(int n) {
    return n ^= (1 << 5);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", toggleFifthBit(n));
    return 0;
}