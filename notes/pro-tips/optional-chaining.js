// Optional Chaining
const bob = {
  name: 'Julia',
  age: 20,
};
const anna = {
  name: 'Julia',
  age: 20,
  job: {
    title: 'Software Engineer',
  },
};

// bad
function displayJobTitle(person) {
  if (person.job && person.job.title) {
    console.log(person.job.title);
  }
}

// good
function displayJobTitle(person) {
  if (person.job?.title) {
    console.log(person.job.title);
  }
}

// good
function displayJobTitle(person) {
  const title = person.job?.title ?? 'No Job Yet';
  console.log(title);
}