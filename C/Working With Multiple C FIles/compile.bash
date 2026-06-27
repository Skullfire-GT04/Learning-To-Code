# this is a way to compile the program directly providing the library

METHOD = "$1"

echo "Method chosen $METHOD"

if ["$METHOD" -eq "1"]; then
    echo "Compile Way 1"
    gcc main.c utility.c -o main && ./main && rm ./main
fi