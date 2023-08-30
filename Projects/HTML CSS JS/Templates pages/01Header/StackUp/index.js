var navbar = document.querySelector(".navbar");
var hamburgerIcon = document.querySelector(".hamburger");
var logoTextContainers = document.querySelectorAll(".flex-logo-text");
var subsectionContainer1 = document.querySelectorAll(
  ".flex-logo-text-toggleEarn"
);
var subsectionContainer2 = document.querySelectorAll(
  ".flex-logo-text-toggleTC"
);
var EarnSubSection = document.querySelector("#EarnSubSection");

function openNavbar() {
  hamburgerIcon.style.display = "none";
  navbar.style.display = "block";
}

function closeNavbar() {
  navbar.style.display = "none";
  hamburgerIcon.style.display = "block";
}

for (let i = 0; i < logoTextContainers.length; i++) {
  logoTextContainers[i].onmouseover = function () {
    logoTextContainers[i].style.cursor = "pointer";
    logoTextContainers[i].lastElementChild.setAttribute(
      "src",
      "./assets/Header Hover.svg"
    );
  };

  logoTextContainers[i].onmouseout = function () {
    logoTextContainers[i].lastElementChild.setAttribute("src", "");
  };
}

for (let i = 0; i < subsectionContainer1.length; i++) {
  subsectionContainer1[i].onmouseover = function () {
    subsectionContainer1[i].style.cursor = "pointer";
  };

  subsectionContainer1[i].onclick = function () {
    subsectionContainer1[i].lastElementChild.classList.toggle("rotate180");
    EarnSubSection.classList.toggle("showHide");
  };
}

for (let i = 0; i < subsectionContainer2.length; i++) {
  subsectionContainer2[i].onmouseover = function () {
    subsectionContainer2[i].style.cursor = "pointer";
  };

  subsectionContainer2[i].onclick = function () {
    subsectionContainer2[i].lastElementChild.classList.toggle("rotate180");
    TcSubSection.classList.toggle("showHide");
  };
}
