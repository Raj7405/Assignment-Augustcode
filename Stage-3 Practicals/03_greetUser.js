const user = {
  firstName: "John",
  lastName: "Doe",
};

function greetUser(user) {
  const { firstName, lastName } = user;
  return `Hello ${firstName} ${lastName}!!`
} 

console.log(greetUser(user));
