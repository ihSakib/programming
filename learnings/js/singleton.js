const Database = (function () {
  let instance; // Private instance variable

  function createInstance() {
    console.log("🔗 Connecting to the database...");
    return { connection: "Database Connected", id: Math.random() }; //Simulating a DB connection
  }

  return {
    getInstance: () => {
      if (!instance) {
        instance = createInstance(); // Create only one connection
      }
      return instance;
    },
  };
})();

// Usage
const db1 = Database.getInstance();
console.log("DB1:", db1);

const db2 = Database.getInstance();
console.log("DB2:", db2);

console.log(db1 === db2); // ✅ true (Same connection)

// class Singleton {
//   static instance;

//   constructor() {
//     if (!Singleton.instance) {
//       Singleton.instance = this;
//       this.name = "I am a Singleton";
//     }
//     return Singleton.instance;
//   }
// }

// const obj1 = new Singleton();
// const obj2 = new Singleton();

// console.log(obj1 === obj2); // ✅ true (Same instance)
