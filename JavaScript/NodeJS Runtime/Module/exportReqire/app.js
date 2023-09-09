//  module.exports  Object assign to var
const areaFunctions = require("./area.js"); // Store the entire module.exports object in the variable areaFunctions.
console.log(areaFunctions);

// ------------------
// object destructuring to extract properties that object
const { circleArea, squareArea } = require("./area.js");
console.log(circleArea, squareArea);

const radius = 5;
const sideLength = 10;

const areaOfCircle = circleArea(radius);
const areaOfSquare = squareArea(sideLength);

console.log(areaOfCircle, areaOfSquare);
