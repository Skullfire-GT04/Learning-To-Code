// objects are basically hashmaps (see notes) in javascript

// here is how you instantiate an object

let obj = new Object();
// or
let new_obj = {};

// both works in the same way

// here is how you can add key-value pairs

// 1. The Brocket Notation
obj["key"] = "value";

// 2. The dot notation
obj.age = 0;

console.log(obj);

// use the bracket notation when you want to add spaces in the key or the key is a variable
// like so
obj["a key with spaces"] = "some value";
// or
let property_name = "age";
console.log(obj.property_name); // this won't work
console.log(obj[property_name]) // but this will

// you can't do the same with dot notation

// Here is how to access all the keys
let keys = Object.keys(obj);
console.log(`Currently stored keys : ${keys}`);

// You can check if a key exists in an object like so
if(obj["non-existent"] == undefined){
    console.log("Key does not exist");
}
// or you can use the in-built .hasOwnProperty function

if(obj.hasOwnProperty("key")){
    console.log("Key exists!");
}

// you can check if a property exists using the ?. operator
// like so

let user = {
    name : "John Doe",
    info: {
        address : 'Faker St 123',
        number: null
    }
}

// let's say we access a property which we are not sure exists
// and it is nested, so we can use the ?. operator like 

let value = user?.info?.age;
console.log(value); // this will print undefined
// without ?. the above statement will throw a referenceError


// here is how you delete key-value pairs
delete user.info;
console.log(user); // the info property will be deleted


// let's look at object destructuring
// It works the same way with array destructuring

// Like
let { name = "not given"} = user;
//         ^^^^^^^^^^^^^
// assigning a default value if it is not given

console.log(name);

// let's see how to destructure nested elements or how to destructure without naming the variables the same thing 
// as the property
user = {
    something : "lol",
    idk : "Skullfire",
    info : {
        phone : {
            home : "423-445-234" // not a real number so don't both calling
        }
    }
}

let {something : weird_name, info : {phone : { home : new_name_for_home }}} = user;
console.log(weird_name, new_name_for_home); // here we have extracted the properties with different names, both with nesting and without it

// you can also assign the properties using the ... (REST) operator
// I got to tell you man, the ... operator can really be used with any iterable

// Like so
let {idk , ...props} = user;
console.log(props) // props will contain everything except the idk property


// Using JSON 

// JSON stand for Javascript Object Notation, and it is exactly what it means
// it is a way of storing data in the form of javascript objects

// You can convert an object into a JSON string or a JSON string back to an object using the JSON class
// Like so
let string_representation = JSON.stringify(user);
console.log(typeof string_representation, string_representation); // the output will "String" and the object in string form

// you can also convert it back like so
let copy_user = JSON.parse(string_representation);
console.log(typeof copy_user, copy_user);
