// 1. Use Strict
// added in ES 5
// use this for Vanila Javascript.
'use strict';

// 2. Variable, rw(read/write)
// let (added in ES6)
let globalName = 'global name';
{
    let name = 'local name';
    console.log(name); // local name
    name = 'hello';
    console.log(name); // hello
    console.log(globalName); // global name
}
console.log(name); // null space
console.log(globalName); // global name

// var (don't ever use this!)
// var hoisting (move declaration from bottom to top)
// has no block scope
{
    age = 4;
    var age;
}
console.log(age); // 4

// 3. Constant, r(read only)
// use const whenever possible
// only use let if variable needs to change.
const daysInWeek = 7;
const maxNumber = 5;

// Note!
// Immutable data types: primitive types, frozen objects (i.e. object.freeze())
// Mutable data types: all objects by default are mutable in JS
// favor immutable data type always for a few reasons:
//  - security
//  - thread safety
//  - reduce human mistakes

// 4. Variable types
// primitive, single item: number, string, boolean, null, undefined, symbol
// object, box container
// function, first-class function

// number
const count = 17; // integer
const size = 17.1; // decimal number
console.log(`value: ${count}, type: ${typeof count}`); // 17, number
console.log(`value: ${size}, type: ${typeof size}`); // 17.1, number

// number - special numeric values: infinity, -infinity, NaN
const infinity = 1 / 0;
const negativeInfinity = -1 / 0;
const nAn = 'not a number' / 2;
console.log(infinity); // Infinity
console.log(negativeInfinity); // -Infinity
console.log(nAn); // NaN

// bigInt (fairly new, don't use it yet)
const bigInt = 1234567890123456789012345678901234567890n;
console.log(`value: ${bigInt}, type: ${typeof bigInt}`); //1234567890123456789012345678901234567890, bigint

// string
const char = 'c';
const brendan = 'brendan';
const greeting = 'hello' + brendan;
console.log(`value: ${greeting}, type: ${typeof greeting}`); // hellobrendan, string
const helloBob = `hi ${brendan}!`; // template literals (string)
console.log(`value: ${helloBob}, type: ${typeof helloBob}`); // hi brendan!, string
console.log('value: ' + helloBob + ' type: ' + typeof helloBob); // hi brendan!, string

// boolean
// false: 0, null, undefined, NaN, ''
// true: any other value
const canRead = true;
const test = 3 < 1; // false
console.log(`value: ${canRead}, type: ${typeof canRead}`); // true, boolean
console.log(`value: ${test}, type: ${typeof test}`); // false, boolean

// null
let nothing = null;
console.log(`value: ${nothing}, type: ${typeof nothing}`); // null, object

// undefined
let x;
console.log(`value: ${x}, type: ${typeof x}`); // undefined, undefined

// symbol, create unique identifiers for objects
const symbol1 = Symbol('id');
const symbol2 = Symbol('id');
console.log(symbol1 === symbol2); // false
const gsymbol2 = Symbol.for('id');
const gsymbol1 = Symbol.for('id');
console.log(gsymbol1 === gsymbol2); // true
console.log(`value: ${symbol1.description}, type: ${typeof symbol1.description}`); // id, string

// object, real-life object, data structure
const user = { name: 'userName', age: 20};
user.age = 21;

// 5. Dynamic typing: dynamically typed language
let text = 'hello';
console.log(text.charAt(0)); // h
console.log(`value: ${text}, type: ${typeof text}`); // hello, string
text = 1;
console.log(`value: ${text}, type: ${typeof text}`); // 1, number
text = '7' + 5;
console.log(`value: ${text}, type: ${typeof text}`); // 75, string
text = '8' / '2';
console.log(`value: ${text}, type: ${typeof text}`); // 4, number
console.log(text.charAt(0)); // error - type: number