async function generateRandomPersonDetail() {
  const response = await fetch("https://randomuser.me/api/");
  const data = await response.json();
  const person = data.results[0];

  document.querySelector(
    "#data-container"
  ).innerHTML = `<img src=${person.picture.large} alt="" />
  <h4>Name : ${person.name.first} ${person.name.last}</h4>
  <p>Age : ${person.dob.age}</p>
  <p>Lives : ${person.location.city}, ${person.location.country}</p>
  <p>Mobile no. : ${person.phone}</p>
  <p>Email : ${person.email}</p>`;
}

document.querySelector("button").onclick = generateRandomPersonDetail;

document.addEventListener("DOMContentLoaded", generateRandomPersonDetail);
