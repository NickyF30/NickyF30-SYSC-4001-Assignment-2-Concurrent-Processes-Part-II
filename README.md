# This repository contains five examples demonstrating process creation, execution, and inter-process communication in Linux/Unix in C++. 

## Instructions to run:
1) Download all the files in the project folder.
2) Navigate to the project folder where all the files are. 
3) Open the terminal from that folder.
   
### How to run programs

#### Part 1:
1) Run command: g++ part1_parent.cpp -o part1_parent
2) Execute: ./part1_parent
3) To kill, Ctrl+C or open a new terminal and type: kill <PARENT_PID> <CHILD_PID>

#### Part 2:
1) Run commands:
  g++ part2_parent.cpp -o part2_parent
  g++ part2_child.cpp -o part2_child
2) Execute: ./part2_parent
3) To kill, Ctrl+C or open a new terminal and type: kill <PARENT_PID> <CHILD_PID>

#### Part 3:
1) Run commands:
  g++ part3_parent.cpp -o part3_parent
  g++ part3_child.cpp -o part3_child
2) Execute: ./part3_parent
3) When child reaches -500 and exits, parent detects this and also terminates.

#### Part 4:
1) Run commands:
  g++ part4_parent.cpp -o part4_parent
  g++ part4_child.cpp -o part4_child
2) Execute: ./part4_parent
3) Program terminates when counter reaches 500, shared memory automatically cleaned.

#### Part 5:
1) Run commands:
  g++ part5_parent.cpp -o part5_parent
  g++ part5_child.cpp -o part5_child
2) Execute: ./part5_parent
3) Program terminates when counter reaches 500, shared memory automatically cleaned.

### Written by Nicky Fang on 2025-11-06 for SYSC 4001A Assignment 2 Part II.
