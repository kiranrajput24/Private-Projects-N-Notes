new Promise((resolve, reject) => {
  resolve("Ok");
})
  .then((res) => {
    console.log(res);
    return res + " done";
  })
  .then((data) => {
    console.log(data);
    throw new Error("error");
  })
  .then(() => {
    console.log("If occur error before it not run");
  })
  .catch((res) => {
    console.log(res);
  });
