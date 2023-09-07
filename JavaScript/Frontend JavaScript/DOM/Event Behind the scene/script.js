function counter() {
  let count = 0;
  const display = document.querySelector("#display");
  const btn = document.querySelector("#btn");

  btn.addEventListener("click", function xyz() {
    console.log(++count);
    display.textContent = count;
  });
}
counter();
