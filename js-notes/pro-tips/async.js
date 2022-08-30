// Promise -> Async/await

// bad
function displayUser() {
  fetchUser() //
    .then((user) => {
      fetchProfile(user).then((profile) => {
        updateUI(user, profile);
      });
    });
}

// good
async function displayUser() {
  const user = await fetchUser();
  const profile = await fetchProfile(user);
  updateUI(user, profile);
}
