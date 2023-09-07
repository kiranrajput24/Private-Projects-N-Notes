// # Hoisting
// # var, function
// - var, function hoisted in window object if they inside lexically direct global object without execute single line of code
// - var variable assigned undefined before that line code executed
//  - function  whole code store in memory

// #### In Global scope

console.log(Var1); // undefined --> before it  not declared get memory while execution
var Var1 = 10;

foo1(); // accessible before declared becoz its already in memory ||| print foo1

function foo1() {
  console.log("foo1");
}

{
  console.log("--------------------------------------------------");
}
// #### In inner function scope
//  - work same but inside function scope

function foo2() {
  console.log(Var1); // undefined --> before it  not declared get memory while execution context context of this function
  var Var1 = 10;

  foo1(); // accessible before declared becoz its already in memory ||| print foo1

  function foo1() {
    console.log("foo1 of function");
  }
}

foo2();

{
  console.log("--------------------------------------------------");
}

// # let and const
// #### also support hoisted but in different way than var
// - before it  declared get memory while execution in script
// - it is separate memory than for var
// - it is temporal dead zone and not accessible before initialization
// end dead zone when declaration of that executed

//
// console.log(Let1); // Uncaught ReferenceError: Cannot access 'Let1' before initialization
let Let1 = 10;

foo1(); // accessible before declared becoz its already in memory ||| print foo1
{
  console.log("--------------------------------------------------");
}

// # Hoisting for arrow  function
// ### with var

// arrowFun1(); // Uncaught TypeError: arrowFun1 is not a function

console.log(" var Arrow fun --> ", arrowFun1); // undefined  variable before initialization
var arrowFun1 = () => {
  console.log("arrowFun1");
};
console.log(" var Arrow fun --> ", arrowFun1); //   function  after initialization

// ### with let
// arrowFun2();  // Uncaught TypeError: arrowFun1 is not a function

// console.log("Arrow fun --> ", arrowFun2); //   console.log("Arrow fun --> ", arrowFun1); //   variable before initialization
let arrowFun2 = () => {
  console.log("arrowFun1 with let ");
};
console.log("Arrow fun --> ", arrowFun2); //   function  after initialization

{
  console.log("--------------------------------------------------");
}

// # Hoisting for anonymous function
// ### with var

// anonymousFun1(); // anonymousFun1 is not a function

console.log("anonymousFun1 fun WITH VAR --> ", anonymousFun1); // undefined  variable before initialization
var anonymousFun1 = function () {
  console.log("anonymousFun1 WITH VAR");
};
console.log("anonymousFun1 fun WITH VAR --> ", anonymousFun1); //   function  after initialization

// ### with let
//  anonymousFun2(); // Cannot access 'anonymousFun2' before initialization
// console.log("Arrow fun --> ", anonymousFun2); //   console.log("Arrow fun --> ", arrowFun1); //   variable before initialization
let anonymousFun2 = function () {
  console.log("anonymousFun2 with let ");
};
console.log("Arrow fun --> ", anonymousFun2); //   function  after initialization
anonymousFun2();

{
  console.log("--------------------------------------------------");
}

// ### var scope
//  var is function scoped but not block when its declared inside function than it is local variable but global

function fn2() {
  var num2 = 2;
}
// console.log(num2) // Uncaught ReferenceError: num2 is not defined

// _____________________________________
//- var and let keyword
//- global  variable outside of function
//- local variable inside function
// _____________________________________

// ###var keyword
//  scope start from function --> global.  ignore block scope
//  main different is var is start from  function scope and ignore block scope
//  can be re-declared within block or [same scoped] that change value of outer declared same variable or previous val
//  {block scope === same scope } both same because block scope ignore by var keyword

// ### let keyword
//  scope start block --> function --> global
//  whereas let is block or function scoped and so on, if outer scope have same name than declared same variable inside block or function is not re-declared instead create new variable
//  can't re-declared in anyway even same scope

{
  console.log("--------------------------------------------------");
}

// var num3 = 3;
// var num3 = 30; // re-declared

// let num4 = 4;
// // let num4 = 40; // error SyntaxError: Identifier 'num4' has already been declared

// {
//   var num3 = 6; // re-declared becoz ignore block scoped var
//   let num4 = 8; // new created. It's scoped inside {} block only
// }
// function funVar() {
//   var num3 = 7; // new created. It's scoped inside function only
//   {
//     var num3 = 30; // re-declared
//   }
//   let num4 = 10; // new created
//   console.log("\n\nvar and let\n\nvar inside fun --> " + num3);
//   console.log("let inside fun --> " + num4);
// }
// funVar();
// console.log("global var Changed in block scope-->" + num3); // 6 change in block
// console.log("global let not chnage-->" + num4); // not re-declarable so same value
