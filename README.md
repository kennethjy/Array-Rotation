# Description

The code I wrote takes a few inputs:
- The length of the array
- The contents of the array
- The spaces to rotate the array to the right

The code in main.c contains the main logic of the code, which includes processing inputs, manually printing the rotated array, and printing the description for each of the printed arrays.
The code in mylib.c contains two functions:
- circular_rotation_right, which takes an array of integers arr, its length N, and spaces to rotate the array k.
- print_array, which prints an array.

# Code explanation for circular_rotation_right
The code I wrote is an improvement to the code i wrote in the exam, which rotated the code right by 1 by swapping the first element of the array by the second element, then the third element, and so on until the end of the array

![Screenshot (27)](https://user-images.githubusercontent.com/114073455/215250656-168373b7-ebbb-4dd7-b400-841c2bd1ca9c.png)
The code here works by swapping the first element by the kth element, then the k * 2 th element, and so on. when the index gets large, I use the modulo of N to get the index to call.
There is a problem with this algorithm, which is thatit breaks when encountering a specific case where k and N has a LCM of more than 1. This problem appears because half or more of the array is unreached. This is fixed by making a variable offset to switch between subarrays.
For example if the array is {1, 2, 3, 4} is shifted by 2, the code has to shift the subarrays {1, 3} and {2, 4}.

# Compiling and running the code
To run the code, simply run run.bat.
On linux, this code has to be manually run in terminal:
```
gcc -c mylib.c -o mylib.o
gcc -c main.c -o main.o
gcc -o main.out main.o mylib.o
main.out
```
# Screenshot

![Screenshot (28)](https://user-images.githubusercontent.com/114073455/215251517-16285942-ff86-4282-afee-f08f67c58049.png)

