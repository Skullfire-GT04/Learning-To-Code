// First of all, this is how you write comments in javascript

/*
And this is how you write multiline comments, and another thing before we start
javascript != java, they are nothing like each other, one is fun the other is not
(you can try to guess which is fun for yourself (p.s. its java))
*/

// You declare variables like so
let a = 12;

// Javascript is dynamically typed, so any variable can store any value
a = "string";
a = 24.25;

// if you want you can use the var keyword instead to declare variables, like so
var b = "this is a var variable";

// so then what is the difference between using var and let?

// Well variables declared using 'var' are hoisted to the top of the file
// so you can re-declare them inside another scope and it will change the original value

// Something like this:
console.log(x); // undefined
var x = 12;
console.log(x) // 12

// since we used 'var' to declare 'x' it will now give an error even if we
// access it before assigning a value to it

// the above code is equivalent to something like this:
var x;
console.log(x); // undefined yet
x = 12;
console.log(x); // 12

// whereas if we use let
try{
console.log(y); // Reference Error since 'y' is not defined yet;
let y = 10;
console.log(y); // 10
}catch(ReferenceError){
    console.log("y has not been defined yet.")
}

/* another thing wrong with using 'var' is the fact that variables
   declared with var are function scoped, and variables declared with 
   let are block scoped
*/

// So if we have the following code:

function entry(age){
    if(age >= 18){
        var isAllowed = true;
    }else{
        isAllowed = false;
    }
    console.log(`Is allowed : ${isAllowed}`); // even though the variable 'isAllowed' is declared inside an if-else block, it is function scoped by default
}
// let's call the function
entry(18);

// Basically just don't use 'var' to declare variables, use 'let' instead

// Another thing you can do is declare variables as constants
// Like
const PI = 3.14;

// Now you cannot do something like this:
// const e;
// you have to initialize constant variables upon declaration

// otherwise the interpreter will throw an error
// Like so:
// const e; // uncomment this line to see the error