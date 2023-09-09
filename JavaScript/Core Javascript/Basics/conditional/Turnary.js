const auth = true;

const redirect = auth
  ? (console.log("Welcome To The Dashboard"), "/dashboard")
  : (console.log("Access Denied"), "/login");

console.log("redirect :" + redirect);

// Multiple ternary
let age = 14;
const canDrink =
  age >= 21
    ? "You can drink!"
    : age >= 18
    ? "You can have 1 beer"
    : age >= 13
    ? "You can drink after few years"
    : "You can not drink";
console.log("canDrink : " + canDrink);
