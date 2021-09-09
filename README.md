#100DaysOfCode


Day 1:
C++ compiled multiple files in Code App by compiling all the source files into 
their associated object files, then linked all the object files.
This was done using the clang++ -c command on each of the source files,
then prefixing the command with a -o <filename.o>
ex. clang++ -c main.cpp -o main.o
    clang++ -c hello.cpp -o hello.o
    clang++ main.o hello.o -o a.out
