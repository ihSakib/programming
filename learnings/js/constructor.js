function createObj() {
  this.name = "sakib";
  this.age = 23;
}

let obj = {};

createObj.call(obj);

console.log(obj);