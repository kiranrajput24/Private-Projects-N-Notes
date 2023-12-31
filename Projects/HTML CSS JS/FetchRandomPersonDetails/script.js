async function generateRandomPersonDetail() {
  try {
    const response = await fetch("https://radomuser.me/api/");
    const data = await response.json();
    if (!response.ok) {
      throw new Error("request Failed");
    }
    console.log(
      "🚀 ~ file: script.js:5 ~ generateRandomPersonDetail ~ response:",
      response,
      data
    );
    const person = data.results[0];

    document.querySelector(
      "#data-container"
    ).innerHTML = `<img src=${person.picture.large} alt="" />
  <h4>Name : ${person.name.first} ${person.name.last}</h4>
  <p>Age : ${person.dob.age}</p>
  <p>Lives : ${person.location.city}, ${person.location.country}</p>
  <p>Mobile no. : ${person.phone}</p>
  <p>Email : ${person.email}</p>`;
  } catch (err) {
    document.querySelector("#data-container").innerHTML = `<h3>${err}<h3>`;
    console.log(err);
  }
}

document.querySelector("button").onclick = generateRandomPersonDetail;

document.addEventListener("DOMContentLoaded", generateRandomPersonDetail);
