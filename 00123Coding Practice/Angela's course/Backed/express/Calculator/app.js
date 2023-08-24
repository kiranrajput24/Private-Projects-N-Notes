const express = require("express");
const bodyParser = require("body-parser");

const app = express();
const port = 3000;
// extended use for post nested object
app.use(bodyParser.urlencoded({ extended: true }));

app.get("/", function (req, res) {
  res.sendFile(__dirname + "/index.html");
});

app.post("/", function (req, res) {
  let num1 = req.body.name1;
  let num2 = req.body.name2;
  let result = Number(num1) + Number(num2);
  //   let result = +num1 + +num2;
  res.send(`<h2>Result : ${result}<h2>`);
});

app.get("/bmicalculator", function (req, res) {
  res.sendFile(__dirname + "/bmiCalculator.html");
});

app.post("/bmicalculator", function (req, res) {
  let weight = parseFloat(req.body.weight);
  let height = parseFloat(req.body.height);

  let BMI = Math.round(weight / (height * height));

  let result = res.send("Your BMI is " + BMI);
});

app.listen(port, function () {
  console.log("Server running...");
});
