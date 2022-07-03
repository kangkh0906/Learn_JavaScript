'use strict';

//  Array

// 1. Declaration
const arr1 = new Array();
const arr2 = [1, 2];

// 2. Index position
const fruits = ['apple', 'banana'];
console.log(fruits);
console.log(fruits.length); // 2
console.log(fruits[0]); // apple (first index)
console.log(fruits[1]); // banana
console.log(fruits[2]); // undefined
console.log(fruits[fruits.length - 1]); // banana (last index)
console.clear();

// 3. Looping over an array
// print all fruits
// a. for
for (let i = 0; i < fruits.length; i++) {
    console.log(fruits[i]);
}

// b. for of
for (let fruit of fruits) {
    console.log(fruit);
}

// c. forEach
fruits.forEach((fruit, index) => {console.log(fruit, index)});

// 4. Addition, deletion, copy, combine
// push: add an item to the end
fruits.push('strawberry', 'peach');
console.log(fruits);

// pop: remove an item from the end
fruits.pop();
fruits.pop();
console.log(fruits);

// unshift: add an item to the begining
fruits.unshift('strawberry', 'lemon');
console.log(fruits);

// shift: remove an item to the begining
fruits.shift();
fruits.shift();
console.log(fruits);

// note!! shift, unshift are slower than pop, push
// splice: remove an item by index position
fruits.push('strawberry', 'peach', 'lemon');
console.log(fruits);
// fruits.splice(1); // remove all items from param
fruits.splice(1, 1); // remove items from param1 (param2: count)
console.log(fruits);
fruits.splice(1, 1, 'greenapple', 'watermelon'); // remove items and push there
console.log(fruits);

// combine two arrays
const fruits2 = ['pear', 'coconut'];
const newFruits = fruits.concat(fruits2);
console.log(newFruits);

// 5. Searching
// find the index
console.clear();
console.log(fruits); // apple, greenapple, watermelon, peach, lemon
console.log(fruits.indexOf('apple')); // 0
console.log(fruits.indexOf('watermelon')); // 2
console.log(fruits.indexOf('coconut')); // -1

// includes
console.log(fruits.includes('apple')); // true
console.log(fruits.includes('coconut')); // false

// lastIndexOf
console.clear();
fruits.push('apple');
console.log(fruits); // apple, greenapple, watermelon, peach, lemon, apple
console.log(fruits.indexOf('apple')); // 0
console.log(fruits.lastIndexOf('apple')); // 5