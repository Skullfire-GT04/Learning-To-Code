// Let's look at loops in javascript


// Let's start with the while loop
/* 
The format is like so:
while(test-condition){
    .
    .
    .
}
*/

let i = 0;
while(i < 10){
    console.log(`i : ${i}`);
    i++;
}

// Let's look at do-while loops now
/*
The format is like so:
do{
    .
    .
    .
}while(test-condition);
*/

let num = 5;
i = 1;
do{
    console.log(`5 x ${i} : ${num}`);
    num += 5;
    i++;
}while(num < 50);


// Let's look at the for loop now
/*
The format is like so:

for(variable_declarations; test-condition; increment/decrement operations){
    .
    .
    .
}

*/
// Like

let foods = ["Apple", "Banana", "Orange", "Pineapple"];
for(let index = 0; index < foods.length; index++){
    console.log(`Foods[${index}] : ${foods[index]}`);
}

// Let look at a for-of loop now
/*
The general format is:

for(let variable_name of iterable){
    .
    .
    .
}
*/

let nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
for(let num of nums){
    console.log(`${num} x ${num} : ${num ** 2}`);
}
// this look is used for iterable data types

// Let's look at a for-in loop
// this loop is used for objects (see notes)

// The format is

/*
for(let variable_name in object){
    .
    .
    .
}
*/

let user = {
    name : "John Doe",
    age : 33,
    info : {
        address : "123 Baker Street"
    }
}

for(let prop in user){
    console.log(prop, ":", user[prop]);
}