// Async operation
let i = 0;
for (; i < 999999; i++) {
  console.log("" + i);
}

setTimeout(() => {
  console.log("timeOut : " + i); // print At the last even time set 0 because stack  occupy by loop
}, 0);

