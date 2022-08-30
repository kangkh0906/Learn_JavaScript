// Shorthand property names
{
  const user1 = {
    name: "username",
    age: "18",
  };

  const name = "username";
  const age = "18";

  // bad
  const user2 = {
    name: name,
    age: age,
  };

  // good - (key === value)
  const user3 = {
    name,
    age,
  };
}

// Destructuring Assignment
{
  // object
  const student = {
    name: "Anna",
    level: 1,
  };

  // bad
  {
    const name = student.name;
    const level = student.level;
    console.log(name, level);
  }

  // good
  {
    const { name, level } = student;
    console.log(name, level);

    const { name: studentName, level: studentLevel } = student;
    console.log(studentName, studentLevel);
  }

  // array
  const animals = ["dog", "cat"];

  // bad
  {
    const first = animals[0];
    const second = animals[1];
    console.log(first, second);
  }

  // good
  {
    const [first, second] = animals;
    console.log(first, second);
  }
}

// Spread Syntax
{
  const obj1 = { key: "key1" };
  const obj2 = { key: "key2" };
  const array = [obj1, obj2];

  // array copy
  const arrayCopy = [...array];
  console.log(array, arrayCopy);

  const arrayCopy2 = [...array, { key: "key3" }];
  obj1.key = "newkey";
  console.log(array, arrayCopy, arrayCopy2);

  // object copy
  const obj3 = { ...obj1 };
  console.log(obj3);

  // array concatenation
  const fruits1 = ["peach", "strawberry"];
  const fruits2 = ["banana", "kiwi"];
  const fruits = [...fruits1, ...fruits2];
  console.log(fruits);

  // object merge
  const dog1 = { dog: "dog1" };
  const dog2 = { dog: "dog2" };
  const dog = { ...dog1, ...dog2 }; //overwritiing
  console.log(dog);
}

// Default parameters
{
  // bad
  {
    function printMessage(message) {
      if (message == null) {
        message = "default message";
      }
      console.log(message);
    }

    printMessage("hello");
    printMessage();
  }

  // good
  {
    function printMessage(message = "default message") {
      console.log(message);
    }

    printMessage("hello");
    printMessage();
  }
}

// Ternary Operator
{
  const isCat = true;
  // bad
  {
    let component;
    if (isCat) {
      component = "cat";
    } else {
      component = "dog";
    }
    console.log(component);
  }

  // good
  {
    const component = isCat ? "cat" : "dog";
    console.log(component);
    console.log(isCat ? "cat" : "dog");
  }
}

// Template Literals
{
  const weather = "sunny";
  const temperature = "16°C";

  // bad
  {
    console.log(
      "Today weather is " + weather + " and tpemerature is " + temperature + "."
    );
  }

  // good
  {
    console.log(
      `Today weather is ${weather} and temperature is ${temperature}.`
    );
  }
}
