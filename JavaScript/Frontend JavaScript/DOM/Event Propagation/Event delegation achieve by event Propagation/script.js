// Let's grab the list itself (ul) and
//  add an event listener to it.
//  Then we can just check to see
//  if the target of the event is a
//   li element and if it is,
//    we can remove it.
const list = document.querySelector("ul");

list.addEventListener("click", function (e) {
  if (e.target.tagName === "LI") {
    console.log("delete : " + e.target);
    e.target.remove();
  }
});
