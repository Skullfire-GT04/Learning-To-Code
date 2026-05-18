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