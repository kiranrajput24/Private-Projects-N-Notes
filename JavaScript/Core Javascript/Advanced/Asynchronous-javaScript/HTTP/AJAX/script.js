// Ajax

const xhr = new XMLHttpRequest();

xhr.open("GET", "https://api.github.com/users/fiddicode/repos");

// readystate has 5 possible values
// _0: request not initialized
// _1: Server Connection established
// _2:request received
// _3:processing request
// _4 request finished and response is ready

xhr.onreadystatechange = function () {
  if (this.readyState == 4 && this.status == 200) {
    const data = JSON.parse(this.responseText);

    data.forEach(function (item) {
      const div = document.createElement("div");
      div.innerHTML = `
      <strong>${item.name}</strong>
      <p>${item.description}</p>
      `;

      document.body.appendChild(div);
    });

    console.log("🚀 ~ file: script.js:28 ~ data:", data);
  }
};

xhr.send();

// // --------------Local json as response

// const xhr = new XMLHttpRequest();

// xhr.open("GET", "./movies.json");

// // readystate has 5 possible values
// // _0: request not initialized
// // _1: Server Connection established
// // _2:request received
// // _3:processing request
// // _4 request finished and response is ready

// xhr.onreadystatechange = function () {
//   if (this.readyState == 4 && this.status == 200) {
//     const data = JSON.parse(this.responseText);

//     data.forEach(function (item) {
//       const div = document.createElement("div");
//       div.innerHTML = `
//       <strong>${item.name}</strong>
//       <p>${item.released}</p>
//       `;

//       document.body.appendChild(div);
//     });
//   }
// };

// setTimeout(function () {
//   xhr.send();
// }, 1000);
