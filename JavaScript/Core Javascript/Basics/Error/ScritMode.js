"use strict";

function fn(a, b, c) {
  // fn(a,a,b) same not support "use strict"  mode
  return a + a + c;
}
var x = 4;
var y = 2;
console.log("fn -->" + fn(x, x, y));
