Tanveer Hossain Bhuiyan
thb2117
lab2

part1:

The code works perfectly fine. Outputs of Valgrind debugger for part1 are given below. 

==6612== Memcheck, a memory error detector
==6612== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6612== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==6612== Command: ./convert 256
==6612== 
signed dec:   256
unsigned dec: 256
hex:          100
binary:       0000 0000 0000 0000 0000 0001 0000 0000
==6612== 
==6612== HEAP SUMMARY:
==6612==     in use at exit: 0 bytes in 0 blocks
==6612==   total heap usage: 2 allocs, 2 frees, 4,136 bytes allocated
==6612== 
==6612== All heap blocks were freed -- no leaks are possible
==6612== 
==6612== For lists of detected and suppressed errors, rerun with: -s
==6612== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

part2:

The code works perfectly fine. Outputs of Valgrind debugger for part2 are given below.

==11505== Memcheck, a memory error detector
==11505== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==11505== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==11505== Command: ./twecho hello world dude
==11505== 
hello HELLO
world WORLD
dude DUDE
==11505== 
==11505== HEAP SUMMARY:
==11505==     in use at exit: 0 bytes in 0 blocks
==11505==   total heap usage: 6 allocs, 6 frees, 1,090 bytes allocated
==11505== 
==11505== All heap blocks were freed -- no leaks are possible
==11505== 
==11505== For lists of detected and suppressed errors, rerun with: -s
==11505== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
