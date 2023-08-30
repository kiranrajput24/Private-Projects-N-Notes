const xhr = new XMLHttpRequest();
xhr.open("GET", "https://api.chucknorris.io/jokes/random");

function generateRandomJoke() {
  xhr.send();
  xhr.onreadystatechange = function () {
    if (xhr.readyState == 4 || this.status === 200) {
      const data = JSON.parse(xhr.responseText);

      document.querySelector("p").textContent = data.value;
    }
  };
}

document.querySelector("button").onclick = generateRandomJoke;

document.addEventListener("DOMContentLoaded", generateRandomJoke);
