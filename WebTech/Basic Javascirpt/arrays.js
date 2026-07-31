// let's take a look at array in javascript

// If you don't know what an array is (its ok broski) its a contiguous block
// of memory, and if you don't know what memory if, check the notes

// Here is how you declare an array

let arr = [];

// here is how you add elements to an array (at the end)
arr.push("Hello");
arr.push(12);
arr.push(true)
arr.push(1.45);

// here you can check
console.log(arr);

// you can remove elements from the end like so
let removed_item = arr.pop() // .pop() returns the element is removed
console.log(`Removed item : ${removed_item}`);

// you can also add elements to the start of the array like so
arr.unshift(542.245);

// here you can check
console.log(arr);

// you can also removed items from the start of the array like so
removed_item = arr.shift();
console.log(`Removed item : ${removed_item}`);

// to add elements in between the array we use the .splice() method

// it works like so:
// array_name.splice(starting_index, number_of_items_to_remove, items_to_add.....);

// it removed the specified number of items starting from the given index and adds
// the items at the provided index

// Like
arr.splice(1, 0, "World");

// here you can check
console.log(arr);


// iterating through an array

// First Way:
for(let i = 0; i < arr.length; i++){} // you can access the length of an array through the .length property

// Second Way
for(let item of arr){} // you can loop over the items directly using a for-each loop

// Third Way
arr.forEach((item, index, arr) => console.log(item, index)); // you can use a built-in function which loops over the items 
                                                             // in an array and applies the logic given by the function provided
// NOTE : forEach does not change the original array 
// here you can check
console.log(arr);

// Fourth Way
let mapped_arr = arr.map((item, index, array) => {
    if(index + 1 < array.length) return array[index] + array[index + 1];
    else return array[index] + array[0];
})
// the .map method iterates over each element and does some logic, and generates a new array
// where each element is the one which was returned by the function provided to the .map function call

console.log(mapped_arr);

// Fifth way
let filtered_arr = mapped_arr.filter((item) => String(item).length >= 3);
// this works in the same way as .map but instead of modifying each element
// it filters through them through a condition which is returned by the argument function
console.log(filtered_arr);


// unpacking elements
let {a, b, c} = filtered_arr;
console.log(a);

// using rest parameter (...)

let copy_arr = {...arr}; // copies all the elements in arr

// you can also copy an array using the .slice function with no arguments
let new_copy = arr.slice();
console.log(new_copy);