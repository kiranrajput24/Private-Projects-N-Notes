/* 
\d != \D
\w != \W
\s != \S --> space \n \t 
. all character except  \n
*/

let str = 'hello +1-(408)-555-0105 ES8  cats rats bats hello   Kiran   Kumar    ram 23ded4';

let re = /\d/g
console.log(str.match(re).join(""));
console.log(str.replace(/\D/g, ""));

let srt1 = "O2 is oxygen"
console.log(srt1.match(/\w2/g))

let str2 = "ES6\ntutorial"
console.log(str2.match(/es\d/ig))
console.log(str2.match(/.s6./sig))

// --------------
// console.log(str.match(/[aeiou]/gi));
// console.log(str.match(/[^aeiou]/gi));
// console.log(str.match(/[\^keeee$]/gi));

console.log(str.match(/\d{1,4}/gi));
console.log(str.match(/\d+/gi)); // + = {1,}
console.log(str.match(/Ki?/gi));  // ? = {0,1}
console.log(str.match(/\d*/gi));  // * = {0,}


