// fetch("https://httpstat.us/200")
//   .then((res) => res) // return Promise  with js native object
//   .then(() => {
//     console.log("success");
//   });

// // in fetch api catch run on if
// fetch("https://httpstat.us/404")
//   .then((res) => {
//     if (res.ok) return res;
//     else throw new Error(res.statusText);
//   }) // return Promise  with js native object
//   .then(() => {
//     console.log("success");
//   })
//   .catch((err) => {
//     console.log(err);
//   });

//   check specific status code
fetch("https://httpstat.us/500")
  .then((res) => {
    if (res.status === 200) return res;
    if (res.status === 404) throw new Error("Not Found");
    if (res.status === 500) throw new Error("Server Error");
    if (res.status !== 200) throw new Error("Request Failed");
  }) // return Promise  with js native object
  .then((res) => {
    console.log("success");
  })
  .catch((err) => {
    console.log(err);
  });
