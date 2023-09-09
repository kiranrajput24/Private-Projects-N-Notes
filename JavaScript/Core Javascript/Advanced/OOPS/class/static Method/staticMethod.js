class Animal {
  constructor(name) {
    this._name = name;
    this._behavior = 0;
  }

  static generateName() {
    const names = ["Angel", "Spike", "Buffy", "Willow", "Tara"];
    const randomNumber = Math.floor(Math.random() * 5);
    return names[randomNumber];
  }
}

console.log(Animal.generateName()); // static method called on  only class

const tyson = new Animal("Tyson");
// tyson.generateName(); // TypeError : tyson.generateName is not a function
// You cannot access the {static method of class} .generateName() method
//  from instances of the Animal class or instances of its subclasses.
