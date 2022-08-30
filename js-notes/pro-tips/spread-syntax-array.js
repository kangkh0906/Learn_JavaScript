// Spread Syntax - Array
let fruits = ["watermelon", "peach", "banana"];

// fruits.push('strawberry');
fruits = [...fruits, "strawberry"];

// fruits.unshift('grape');
fruits = ["grape", ...fruits];

const fruits2 = ["melon", "apple", "kiwi"];
let combined = fruits.concat(fruits2);
combined = [...fruits, "cherry", ...fruits2];
