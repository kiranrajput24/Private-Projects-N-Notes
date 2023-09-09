
// regular function
function fun() {
  console.log("🚀 ~ file: function.js:5 ~ this:", this);
}
fun();
//  if use this keyword in global scope then it refer to global Object

let obj1 = {
  name: "obj1",
  fn: function () {
    // console.log("this inside fn that is inside object", this);
  },
};

obj1.fn();

//  when use regular function inside any object then this keyword inside that function refer to that object that called that...

// =>  arrow function

// console.log("this inside => fn that is global object", this);

let obj2 = {
  name: "obj2",
  fn: () => {
    // console.log("this inside => fn that is inside object", this);
  },
};

obj2.fn();

//  arrow function  refer to empty object in global scope and inside any object that called it

//  default value in function

function defaultValue(message = "empty message") {
  console.log("🚀 ~ file: function.js:40 ~ message:", message);
}

defaultValue("hello");
defaultValue();

// ----------------Enough_____________________-

//Advanced
//
//
//
//
//
// Doubt
let obj3 = {
  name: "obj3",
  fn: function () {
    (() => {
      //   console.log("this inside => fn that is inside object", this);
    })();
    // console.log("this inside fn that is inside object", this);
  },
};

obj3.fn();

//  arrow function refer to object that owns it no matter what obj calls it
