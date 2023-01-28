gcc -c mylib.c -o mylib.o
gcc -c main.c -o main.o
gcc -o main.exe main.o mylib.o
main.exe
del *.o
del *.exe