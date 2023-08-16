// let ar = [1, 2, 3, 4]
// var r = ar.forEach(element => {
//     // console.log(element)
// });

// r = ar.reduce((ac, val) => (ac + val), 197)
// r = ar.slice(1, 6)
// r = ar.splice(0, 4, 21312, 434, 1, 2, 3, 4, 56, "ABCD", "Zsogtd", "OIghwiugfd", "kiran", "Chandni", "ANnu")
// // console.log(ar)
// ar = r = ar.sort((a, b) => {
//     if (typeof a === "number" && typeof b === "number") {
//         if (a > b)
//             return 1
//         else if (a < b)
//             return -1
//         else
//             return 0
//     }
//     else if (typeof a === "string" && typeof b === "string") {
//         if (a.toLowerCase() > b.toLowerCase())
//             return 1;
//         else if (a.toLowerCase() < b.toLowerCase())
//             return -1
//         else
//             return 0
//     }
// })

// console.log(ar)

// // r = ar.map((val, index) => {
// //     return val + index;
// // })
// // ar.push(121212)
// // ar.pop()
// // ar.shift()
// // ar.unshift(76)
// // r = ar.filter(val => typeof val === "number" && val <= 100)
// // ar.push(1.24, {})
// // r = ar.some((val) => val == {})
// // r = ar.every((val) => typeof val == "number" || typeof val === "string")
// // ar.splice(8, 1)
// // console.log(ar)
// // console.log(ar.indexOf())
// // ar.reverse()
// // // ar.sort()
// // console.log(ar)

// let str = "Hello my name is            kiran kumar, and im from uttarakhand. i liked js to code any programming challences";
// let result = str.split(" ")
// let re = RegExp("is", "ig")
// result = str.search(re)
// result = str.replace(/I/ig, "p")
// result = str.slice(-40, -1)
// result = str.substring(1, 50)
// result = str.trim() // removes start and end space
// result = str.concat(" ", result)
// result = str.charAt(0)
// result = str.toUpperCase()
// result = str.indexOf("k")
// result = str.match(/i/g)
// console.log("mathc method --> " +result)

// let ar1 = [1, 2, 3, 4, 5, 6, 7, 8, 'Kiran'];
// let ar2 = [10, 11, 12, 13, 14, 15];
//  r;

// r = ar1.concat(ar2);
// r = ar1.join(",")
// r = ar1.slice(1, 3)
// r = ar1.lastIndexOf('Kiran')

// ar1.forEach((a) => {
//     // console.log(a)
// })
// r = ar1.every((a) => typeof a === "number")
// r = ar1.some((a) => typeof a === "string")

// r = ar1.filter((a) => typeof a === "string")
// r = ar1.map((a) => {
//     if (typeof a === "number") {
//         return a + 10
//     }
//     else if (typeof a === "string") {
//         return a + " Kumar"
//     }

// })

// // console.log(ar1, r)

cases = ["123", "456", "789", "147", "258", "369", "159", "357"];

let re = new RegExp(/[123]/,'g')
let matched = ("134233".match(re))
if(matched)
console.log(matched.sort((a,b)=>a-b).join(''));
else
console.log(matched);