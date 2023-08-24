"use strict"

// by var keyword we create a property for window object

// var name = "Linux"
// console.log(window.name) // work only broswer


// Jascript support inner function  and  is local scoped like variable

// function fn3()
// {
//     function fn3child(){
//         console.log("InnerFunction");
//     }
//     fn3child();
// }
// fn3()



function fn(a,b,c){ // fn(a,a,b) same not support "use strict"  mode
    return a+a+c
}
var x=4;
var y=2
console.log("fn -->"+fn(x,x,y));


// _________________
//  var is functiom scoped but not bloack when its declared inside function than it is local variable but global

// function fn2()
// {
//     var num2 = 2
// }
// console.log(num2) // er -->  ReferenceError: num2 is not defined




// _____________________________________
// var and let keyword
// global  variable outside of function
// local variable inside function
// _____________________________________

// var keyword
//  scope start from function --> global.  ignore blcok scope
//  main different is var is start from  function scope and ignore block scope
//  can be redeclared within block or [same scoped] that change value of outer declared same variable 
//  {block scope === same scope } both same because block scope ignore by var keyword


// let keyword
//  scope start blcok --> function --> global 
//  whereas let is block or function scoped and so on, if outer scope have same name than declared same variable inside block or function is not redeclared instead create new variable
//  can't redeclared in anyway even same scope

var num3 = 3;
let num4 = 4;

var num3 = 30;  // redeclared 
// let num4 = 40;  // error SyntaxError: Identifier 'num4' has already been declared

{
    var num3 = 6; // redeclared becoz ignore block scoped var
    let num4 = 8; // new created. It's scoped inside {} block only
}
function funVar(){
    var num3 = 7; // new created. It's scoped inside function only
    {
        var num3 = 30; // redeclared
    }
    let num4 = 10; // new created
    console.log("\n\nvar and let\n\nvar inside fun --> " +num3);
    console.log("let inside fun --> "+ num4);
}
funVar();
console.log("global var -->"+ num3); // 6 change in block
console.log("global let -->"+num4); // not redeclarable so same value





// _____________________________________
// hoisting means excute or hoist declared variable first before any code [hoist == ucha rakhna]
// only var varibale and function support hoisting
// let and const not support  hoisting
// direct initialed variable without any keyword same as var keyword [proved]
// _____________________________________


num5 = 5 
console.log("\n\nvar use without declared --> "+num5);
var num5;  // supported hoisting

console.log(fun5()); // suppoetd hoisting

function fun5() {
    return "Function support hoisting. hurrey"
}

// num5 = 5 
// console.log(num5); // give error --> ReferenceError: Cannot access 'num5' before initialization
// let num5;  // not support hoisting

