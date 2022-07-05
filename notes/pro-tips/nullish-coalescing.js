// Nullish coalescing operator
// bad
function printMessage(text) {
  let message = text;
  if (text == null || text == undefined) {
    message = 'Nothing to display';
  }
  console.log(message);
}

// good
function printMessage(text) {
  const message = text ?? 'Nothing to display';
  console.log(message);
}

// Default parameter is only for undefined
function printMessage(text = 'Nothing to display') {
  console.log(text);
}

// Logical OR operator ||
function printMessage(text) {
  const message = text || 'Nothing to display';
  console.log(message);
}

printMessage('Hello');
printMessage(undefined);
printMessage(null);
printMessage(0);
printMessage('');

const result = getInitialState() ?? fetchFromServer();
console.log(result);

function getInitialState() {
  return null;
}
function fetchFromServer() {
  return 'Hiya from mac';
}