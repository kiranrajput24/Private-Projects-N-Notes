// # Type Error
// - reassignment of constant variable
{
  /* <hr/> */
}
const a = 10;
// a = 20; // TypeError: Assignment to constant variable.
console.log(a);

{
  /* <hr/> */
}

// # Reference error
// - when try to random variable that ios not in program

// console.log(x) ReferenceError: x is not defined

// -when try to access temporal dead zone variable
// - let before initialization , that hoisted but in script scope that is not accessible
// console.log(b); // ReferenceError: Cannot access 'b' before initialization
let b = 100;

{
  /* <hr/> */
}

// # Syntax Error

// const d; //SyntaxError: Missing initializer in const declaration
let c = 100;
// let c = 1000; //SyntaxError: Identifier 'c' has already been declared
