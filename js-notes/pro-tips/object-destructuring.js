// Object Destructuring
const person = {
  name: 'Julia',
  age: 20,
  tel: '01012345678',
};
// bad
function displayPerson(person) {
  displayAvatar(person.name);
  displayName(person.name);
  diplayProfile(person.name, person.age);
}

// bad
function displayPerson(person) {
  const name = person.name;
  const age = person.age;
  displayAvatar(name);
  displayName(name);
  diplayProfile(name, age);
}

// good
function displayPerson(person) {
  const {name, age} = person;
  displayAvatar(name);
  displayName(name);
  diplayProfile(name, age);
}