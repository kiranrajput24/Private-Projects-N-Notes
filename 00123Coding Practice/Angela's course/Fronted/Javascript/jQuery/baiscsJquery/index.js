// need these if script in HTML head
// $(document).ready(function () {
// });
// -----------------
//  query element
var h1 = $("h1");
// set css value
h1.css("color", "red");
// get css value
console.log(h1.css("font"));
// add classes   and can also removeClass()
h1.addClass("big-text bg");
// check is class added
console.log(
  "🚀 ~ file: index.js:8 ~ h1.hasClass(big-text):",
  h1.hasClass("big-text")
);
// set text
h1.text("Bye");
jQuery("button").text("All change");

// set HTML
$("button").html("<em>HTML Button<em/>");

// get element attribute value
console.log(
  '🚀 ~ file: index.js:24 ~ $("a").attr("href"):',
  $("a").attr("href")
);

// set attribute in element
$("a").attr("href", "https://www.yahoo.com");

// Select all and add event
$("button").click(function () {
  $("h1").css("color", "purple");
});
// on method pass any event that exist
$("button").on("click", function () {
  $("h1").css("color", "purple");
});

$(document).keypress(function (e) {
  $("h1").text(e.key);
});

// add element by before, after , prepend, append
// before and after add elements to as sibling
$("h1").before("<button>before h1<button>");
$("h1").after("<button id='afterbtn'>after h1<button>");

// prepend and append add element as child
$("h1").prepend("<button>prepend h1<button>");
$("h1").append("<button>append h1<button>");

// remove method
$("#afterbtn").remove();

//  hide and show method
$("a").hide();
$("a").show();

// toggle function for hide and unhide
// $("button").on("click", function () {
//   $("h1").toggle();
// });

// toggle function for hide and unhide with animation
$("button").on("click", function () {
  // $("h1").fadeToggle();
  $("h1").slideToggle();
});

// animate method accepts only numeric css value
$(".click").click(function () {
  $(".helloP").animate({ fontSize: "8rem" });
});

//  add animate chaining

$(".click").click(function () {
  $(".helloP").slideUp().fadeOut().slideDown().animate({ fontSize: "8rem" });
});

// documentation
// https://api.jquery.com/
