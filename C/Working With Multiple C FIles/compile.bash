# this is a way to compile the program directly providing the library

echo "Compile Way 1"
gcc main.c utility.c -o main && ./main && rm ./main