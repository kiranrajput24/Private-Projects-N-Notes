var obj = { firstName: "John", lastName: "Doe", age: 30, isMarried: true };

var json = JSON.stringify(obj);
var new_obj = JSON.parse(json);
console.log("🚀 ~ file: Json.js:3 ~ obj to json:", json);
console.log("\n\n🚀 ~ file: Json.js:5 ~json to new_obj :", new_obj);
