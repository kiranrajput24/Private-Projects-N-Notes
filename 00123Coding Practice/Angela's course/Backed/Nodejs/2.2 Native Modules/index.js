// let { writeFile } = require("fs");

// writeFile("..messhdfggagext", "hh", (err) => {
//   if (err) throw err;
//   console.log("The file has been saved!");
// });

let fs = require("fs");

fs.readFile("message.txt", "utf8", (err, data) => {
  if (err) throw err;
  console.log(data);
});
