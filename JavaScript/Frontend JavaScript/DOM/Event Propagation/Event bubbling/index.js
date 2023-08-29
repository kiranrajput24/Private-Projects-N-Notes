// # Event Bubbling

//  when click button than event bubble up btn to document
const button = document.querySelector("button");
const div = document.querySelector("div");

button.addEventListener("click", (e) => {
  e.stopPropagation(); // stop bubbling here
  console.log("Button click");
});

div.addEventListener("click", (e) => {
  // e.stopPropagation(); // stop bubbling here
  console.log("div clicked");
});

document.addEventListener("click", (e) => {
  e.stopPropagation();
  console.log("document clicked");
});
