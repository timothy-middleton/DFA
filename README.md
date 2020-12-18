# Deterministic Finite Automata
Description:
In this assignment, you will implement a deterministic finite automata (DFA) using C++ programming language to extract all matching patterns (substrings) from a given input DNA sequence string. 

1.	The alphabet for generating DNA sequences is {A, T, G, C}. Write a regular expression that represents all DNA strings that contains at least two ‘A’s. Note: assume empty string is not a valid string.
2.	Design a deterministic finite automaton to recognize the regular expression.
3.	Write a program which asks the user to input a DNA sequence. The program should be able to extract all the patterns (substrings present in the DNA sequence) that match the regular expression given in 1. You MUST implement DFA from (2) to check if all possible substrings in the DNA sequence is a part of the regular expression or not. 

Note: even if the same pattern is found multiple times, it should be printed every time it is found. The program should mimic how a DFA processes a string: reading one letter at a time and doing state transitions. Don’t directly check if the string contains at least two A’s.

Below are two sample input/output. Only the bolded are user input. 

Input a DNA sequence: CATTTGCAGG

Matching patterns are:

CATTTGCA

CATTTGCAG

CATTTGCAGG

ATTTGCA

ATTTGCAG

ATTTGCAGG

Input a DNA sequence: TTTATAA

Matching patterns are:

TTTATA

TTTATAA

TTATA

TTATAA

TATA

TATAA

ATA

ATAA

TAA

AA




