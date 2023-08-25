let x;
x = 10 && 20; // 20
x = 10 && 20 && 30; // 30
x = 10 && 0 && 30; // 0 (30 is not evaluated)
x = 10 && false && 30; // false (30 is not evaluated)
console.log("AND :5 ~ x:", x);
// it will execute from left to right. If any of the values are falsy, that value will be returned; otherwise, the last value will be returned.

let y;
y = 10 || 20; // 10 (20 is not evaluated)
y = 0 || 20; // 20
y = 10 || 0 || 30; // 10 (0 and 30 are not evaluated)
y = false || false || 30; // 30
y = false || false || 0; // 0
console.log("OR y:", y);
// It will return the first value that is truthy. This is more common than using the && operator.




// Nullish
let c;
c = 10 ?? 120; // 10
c = null ?? 20; // 20
c = undefined ?? 20; // 20
c = null ?? 0 ?? 20; // 0 (it will return 0 because it is not null or undefined)
console.log("Nullish c:", c);

// The ?? operator will return the right side operand when its left side is either null or undefined. It is similar to || operator except, it doesn't look at all falsey values, only null and undefined.
