// Objects
// one of the JavaScript's data types.
// a collection of related data and/or functionality.
// Nearly all objects in JavaScript are instances of Object
// object = { key : value };

// 1. Literals and properties
const obj1 = {}; // 'object literal' syntax
const obj2 = new Object(); // 'object constructor' syntax

function print(person) {
    console.log(person.name);
    console.log(person.age);
}

const user = { name: 'username', age: 4 };
print(user); // username, 4

// with JavaScript magic (dynamically typed language)
// can add properties later
user.job = true;
console.log(user.job); // true

// can delete properties later
delete user.job;
console.log(user.job); // undefined

// 2. Computed properties
// key should be always string
console.log(user.name); // username
console.log(user['name']); // username
user['job'] = true;
console.log(user.job); // true

// example
function printValue(obj, key) {
    console.log(obj[key]);
}
printValue(user, 'name');
printValue(user, 'age');

// 3. Property value shorthand
const person1 = { name: 'bob', age: 2 };
const person2 = { name: 'steve', age: 3 };
const person3 = { name: 'dave', age: 4 };
// const person4 = makePerson('username', 20);
const person4 = new Person('username', 20);
console.log(person4); // {name: 'username', age: 20}

function makePerson(name, age) { // like Class (template)
    return {
        name, // name: name, -> name,
        age, // age: age, -> age,
    };
}

// 4. Constructor Function
function Person(name, age) { // from line 50 ~ 55
    // this = {};
    this.name = name;
    this.age = age;
    // return this;
}

// 5. in operator: property existence check (key in obj)
console.log('name' in user); // true
console.log('age' in user); // true
console.log('random' in user); // false
console.log(user.random); // undefined

// 6. for..in vs for..of
// for (key in obj)
console.clear();
for (key in user) {
    console.log(key);
}

// for (value of iterable)
const array = [1, 2, 4, 5];
// for (let i = 0; i < array.length; i++) {
//     console.log(array[i]);
// }
for (value of array) {
    console.log(value);
}

// 7. Fun cloning
// Object.assign(dest, [obj1, obj2, obj3...])
const user1 = {name: 'username', age: '20'};
const user2 = user1;
// user2.name = 'coder';
console.log(user1);

// old way
const user3 = {};
for (key in user1) { // 1. name 2. age
    user3[key] = user1[key];
}
console.clear();
console.log(user3);

// const user4 = {};
// Object.assign(user4, user1);
const user4 = Object.assign({}, user1);
console.log(user4);

// another example
const fruit1 = {color: 'red'};
const fruit2 = {color: 'blue', size: 'big'};
const mixed = Object.assign({}, fruit1, fruit2);
console.log(mixed.color); // blue - overwriting
console.log(mixed.size); // big