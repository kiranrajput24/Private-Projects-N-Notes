// LocalStorage not store object. it only store string
//  localStorage Methods
localStorage.setItem("name", "Kiran"); // set value with key
localStorage.getItem("name"); // get value with key
localStorage.removeItem("name"); // remove item using the key
localStorage.clear(); // remove all the values

document.querySelector("h1").textContent = localStorage.getItem("name");

let obj = {
  name: "kiran",
  addr: 143,
};

localStorage.setItem("objAsString", JSON.stringify(obj)); // set value with key
console.log(JSON.parse(localStorage.getItem("objAsString")));

// ----------------------------------------
// Session Storage have same methods different is that data remove when page closed

sessionStorage.setItem("name", "Krishna");
