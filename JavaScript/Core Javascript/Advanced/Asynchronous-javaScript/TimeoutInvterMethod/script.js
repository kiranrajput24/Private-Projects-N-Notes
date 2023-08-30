function ColorChange() {
  // bg color change

  document.body.style.backgroundColor =
    "#" + Math.floor(Math.random() * 16777215).toString(16);

  // btn color change
  document.querySelector("#start").style.backgroundColor =
    "#" + Math.floor(Math.random() * 16777215).toString(16);
}
let interval;

function startColorChange() {
  if (!interval) {
    interval = setInterval(ColorChange, 2000, "change Color");
  }
}

function stopColorChange() {
  clearInterval(interval);
}

document.querySelector("#start").addEventListener("click", startColorChange);
document.querySelector("#stop").addEventListener("click", stopColorChange);

console.log("hello");
