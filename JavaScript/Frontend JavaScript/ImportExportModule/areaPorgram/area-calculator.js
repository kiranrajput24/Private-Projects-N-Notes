//  if have same name from module then use as 
import { area as squareArea } from 'square-area.js';
import { area as circleArea } from 'circle-area.js';

console.log('The area of a square with sides of length 5 is ' + squareArea(5));
console.log('The area of a circle with radius of length 5 is ' + circleArea(5));