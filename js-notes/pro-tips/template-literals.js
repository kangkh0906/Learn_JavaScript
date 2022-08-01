// Template Literals (Template String)
const person = {
  name: 'Julia',
  score: 4,
};

// bad
console.log('Hello' + person.name + ', Your score is: ' + person.score);

// good
console.log(`Hello ${person.name}, Your score is: ${person.score}`);

// good
const {name, score} = person;
console.log(`Hello ${name}, Your score is: ${score}`);

// good
function greetings(person) {
  const {name, score} = person;
  console.log(`Hello ${name}, Your score is: ${score}`);
}