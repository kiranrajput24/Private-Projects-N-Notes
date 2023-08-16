let startBtn = document.querySelector("#start"),
  displayScore = document.querySelector("#score"),
  container = document.querySelector(".container ");
for (let i = 0; i < 200; i++) {
  container.appendChild(document.createElement("div"));
}
let squares = document.querySelectorAll(".container div"),
  //
  appleIndex = 0,
  currentSnake = [2, 1, 0], // value  2 is head and value 0 is tail
  direction = 1,
  score = 0,
  currentIndex = 0,
  speed = 0.8,
  intervalTime = 0,
  interval = 0;

const widthLength = 20; // width of div
document.addEventListener("keyup", control);
startBtn.addEventListener("click", startGame);

function startGame() {
  // restart value
  currentSnake.forEach((val) => {
    squares[val].classList.remove("snake");
  });
  squares[appleIndex].classList.remove("apple");
  clearInterval(interval);
  score = 0;
  //  value set for start game
  randomAppleIndex();
  direction = 1; // starting direction right
  displayScore.textContent = score;
  intervalTime = 1000;
  currentIndex = 0;
  currentSnake = [2, 1, 0];
  currentSnake.forEach((val) => {
    squares[val].classList.add("snake");
  });
  interval = setInterval(nextMove, intervalTime);
}

function nextMove() {
  try {
    var selfBit =
      squares[currentSnake[0] + direction].classList.contains("snake");
  } catch (e) {
    console.log("🚀 ~ file: app.js:48 ~ nextMove ~ e:", e);
  }
  if (
    (currentSnake[0] + widthLength >= widthLength * widthLength &&
      direction === widthLength) ||
    (currentSnake[0] % widthLength === widthLength - 1 && direction === 1) ||
    (currentSnake[0] - widthLength < 0 && direction === -widthLength) ||
    (currentSnake[0] % widthLength === 0 && direction === -1) ||
    selfBit
  ) {
    clearInterval(interval);
    alert("Game Over");
  }

  const tail = currentSnake.pop();
  squares[tail].classList.remove("snake");
  currentSnake.unshift(currentSnake[0] + direction);
  squares[currentSnake[0]].classList.add("snake");
  //    apple found
  if (squares[currentSnake[0]].classList.contains("apple")) {
    squares[currentSnake[0]].classList.remove("apple");
    squares[tail].classList.add("snake");
    currentSnake.push(tail);
    randomAppleIndex();
    displayScore.textContent = ++score;
    clearInterval(interval);
    intervalTime *= speed;
    interval = setInterval(nextMove, intervalTime);
  }
}

function randomAppleIndex() {
  do {
    appleIndex = Math.floor(Math.random() * squares.length);
    console.log(
      "🚀 ~ file: app.js:76 ~ randomAppleIndex ~ appleIndex:",
      appleIndex
    );
  } while (squares[appleIndex].classList.contains("snake"));

  squares[appleIndex].classList.add("apple");
}

function control(e) {
  // squares[currentIndex].classList.remove("snake"); //why?
  switch (e.keyCode) {
    case 37:
      direction = -1; // left
      break;
    case 38:
      direction = -widthLength; // up
      break;
    case 39:
      direction = 1; // right
      break;
    case 40:
      direction = widthLength; // down
      break;
  }
}
