// function are the building block of any program
// so you should know how to make them 

/*
The general format is like so:

function function_name(arguments){
    .
    .
    .
}

*/

// Like
function add(a, b){
    return a + b;
}

// you can also use the shorthand notation for assigning function to variables
// (this works because function names are essentially pointers)

/* 
The format is like so:

let/const/var identifier = (arguments) => {
    .
    .
    .
}

This is also called the arrow notation declaration syntax, since => looks like an arrow LOL
*/

// Like

const area = (radius) => {
    return Math.PI * (radius ** 2);
}

// now the variable area is a function pointer

// You can also use the arrow notation syntax to make lambda functions (see notes)
// Like say a function utilized another function as an argument, you can define the function 
// inside the function call itself like so:

let calc_tax = (salary, percentile) => {
    return salary - percentile(salary);
}

// now you can define the 'percentile' function while calling the 'calc_tax' function like so

let tax = calc_tax(1000, (sal) => {
    return sal * 0.8;
});

console.log(`Tax this month: ${tax}`);


// Let's make variadic functions (see notes)

/* 
There are two ways to make variadic functions
(i) The arguments method
(ii) The REST parameter method (...)

Let's look at each one

(i) The arguments method: by default all functions have a property called 'arguments' which is a list 
                          which contains all the arguments passed into the function, we can use this parameter
                          to access the various arguments we pass into a function without needing to explicitly
                          define them in the function definition

(ii) The REST parameter: this is the newer method and is more preferred since it doesn't rely on a pre-built macro.
                         you define an argument type as variadic by appending three dots before its name. 
                         Like:
                         function addAll(...nums){}

                         the 'nums' arguments here is a variadic argument and can contain any number of arguments
                         it is essentially a list.
*/

// Like

// defining a variadic function using the arguments parameter
function addArgs(){
    let out = 0;
    for(let i = 0; i < arguments.length; i++){
        out += arguments[i];
    }
    return out;
}

// defining a variadic function using the REST parameter
function addRest(...nums){
    let out = 0;
    for(let num of nums) out += num;
    return out;
}

// Let's call each one

console.log(addArgs(1, 2, 3, 4, 5, 6));
console.log(addRest(2, 3, 4, 10, 3));