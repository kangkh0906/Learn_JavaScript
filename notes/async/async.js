// async & await
// clear style of using promise

// 1. async
async function fetchUser() {
    // do network request in 10 secs...
    return 'username';
}

const user = fetchUser();
user.then(console.log);
console.log(user);

// 2. await
function delay(ms) {
    return new Promise(reslove => setTimeout(reslove, ms));
}

async function getApple() {
    await delay(2000);
    // throw 'error';
    return 'apple';
}

async function getBanana() {
    await delay(1000);
    return 'banana';
}

// function getBanana() {
//     return delay(3000);
//     .then(() => 'banana');
// }

// function pickFruits() {
//     return getApple().then((apple) => {
//         return getBanana().then((banana) => `${apple} + ${banana}`);
//     });
// }

async function pickFruits() {
    const applePromise = getApple();
    const bananaPromise = getBanana();
    const apple = await applePromise;
    const banana = await bananaPromise;
    return `${apple} + ${banana}`;
}

pickFruits().then(console.log); // apple + banana

// 3. useful Promise APIs
function pickAllFruits() {
    return Promise.all([getApple(), getBanana()])
    .then(fruits => fruits.join(' + '));
}
pickAllFruits().then(console.log); // apple + banana

function pickOnlyOne() {
    return Promise.race([getApple(), getBanana()]);
}
pickOnlyOne().then(console.log); // banana


// Callback Hell Example To Promise -> async use
class UserStorage {
    async userLogin(id, password) {
        const user = await this.loginUser(id, password);
        const role = await this.getRoles(user);
        return user, role;
    };

    loginUser(id, password) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                if (
                    (id === 'username' && password === 'pw') ||
                    (id === 'coder' && password === 'coderpw')
                ) {
                    resolve(id);
                } else {
                    reject(new Error('not Found'));
                }
            }, 2000);
        });
    }

    getRoles(user) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                if (user === 'username') {
                    resolve({name: 'username', role: 'admin'});
                } else {
                    reject(new Error('no access'));
                }
            }, 1000);
        });
    }
}

const userStorage = new UserStorage();
const id = prompt('enter your id');
const password = prompt('enter your password');
userStorage
    .userLogin(id, password)
    .then(user => alert(`Hello ${user.name}, you have a ${user.role} role`))
    .catch(console.log);
