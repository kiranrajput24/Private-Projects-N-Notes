/* secret-messages.js */
import {
  toggleHiddenElement,
  changeToFunkyColor,
} from "./moduleForHideShowChangeBgColor.js";

const buttonElement = document.getElementById("secret-button");
const pElement = document.getElementById("secret-p");

buttonElement.addEventListener("click", () => {
  toggleHiddenElement(pElement);
  changeToFunkyColor(buttonElement);
});
