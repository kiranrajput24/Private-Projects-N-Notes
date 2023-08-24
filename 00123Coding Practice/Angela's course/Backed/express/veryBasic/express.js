const express = require("express");
const app = express();
const port = 3000;

app.get("/", (req, res) => {
  res.send("<h1>Root Directory or Home directory<h1>");
});

app.get("/contact",(req,res)=>{
    res.send("<p>Contact me kiranBohra@gmail,com <p/>")
})

app.get("/about", (req, res) => {
    res.send("<h1>My name is kiran kumar, I'm currently working as react developer in hybrid Utopia<h1>");
  });
app.listen(port, () => {
  console.log("Server stared on port : http://localhost:" + port);
});
