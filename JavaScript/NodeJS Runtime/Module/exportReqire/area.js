/* shape-area.js */
const PI = Math.PI;

// Define and export circleArea() and squareArea() below
function circleArea(radiusLength) {
  return (PI * radiusLength ** 2).toFixed(2);
}

// module.exports is object
// module.exports.circleArea = circleArea;

// module.exports.squareArea =
function squareArea(sideLength) {
  return sideLength ** 2;
}

// alternative
module.exports = { circleArea, squareArea };
