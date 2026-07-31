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

// use the bracket notation when you want to add spaces in the key
// like so
obj["a key with spaces"] = "some value";

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

