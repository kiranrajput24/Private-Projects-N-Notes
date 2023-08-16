// regular function
// function that declared in global scope that is added global object as its properties
function fun() {
  //   console.log("🚀 ~ file: function.js:5 ~ this:", this);
}
fun();
//  if use this keyword in global scope then it refer to global Object

function Obj() {
  (this.name = "obj"),
    (fn = function () {
      console.log("this inside fn that is inside object", this);
    });
}

let instance_of_obj = new Obj();
instance_of_obj.fn();
