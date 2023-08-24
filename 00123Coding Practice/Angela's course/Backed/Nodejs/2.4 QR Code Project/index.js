import inquirer from "inquirer";
import qr from "qr-image";
import fs from "fs";

inquirer
  .prompt([{ type: "input", name: "url", message: "Enter url :" }])
  .then((answers) => {
    var qr_svg = qr.image(answers.url, { type: "png" });
    qr_svg.pipe(fs.createWriteStream("QR.png"));
    fs.writeFile("QrText.ext", answers.url, (er) => {
      console.log(er);
    });
    console.log("QR image created " + answers.url);
  })
  .catch((error) => {
    console.log("🚀 ~ file: index.js:14 ~ error:", error);
  });
