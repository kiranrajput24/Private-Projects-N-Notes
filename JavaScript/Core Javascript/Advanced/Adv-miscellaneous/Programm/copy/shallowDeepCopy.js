person1 = {
  name: "Bobo",
  address: { street: "Main Street", number: 123 },
};

console.log("Before shallowPersonClone Not mutate :", { person1 });

// spread operator do shallowCopy
const shallowPersonClone = { ...person1 };
shallowPersonClone.address.number = 456;

console.log(
  "after shallowPersonClone  mutated--> shallowPersonClone.address.number = 456;:",
  { person1 }
);
console.log({ shallowPersonClone });

// ---------------------------------------------------------------------

// Deep copy
const person2 = {
  name: "Bobo",
  address: { street: "Main Street", number: 123 },
};

const deepPersonClone = JSON.parse(JSON.stringify(person2));
deepPersonClone.address.number = 456;

console.log("Even This --> deepPersonClone.address.number = 456;",{ person2, deepPersonClone });
