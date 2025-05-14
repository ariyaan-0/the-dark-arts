let myMap = new Map();

myMap.set(1, "Uno");
myMap.set(2, "Dos");
myMap.set(3, "Tres");
myMap.set(4, "Cuatro");

console.log(myMap);

// for(let key of myMap.keys()){
//     console.log(`Key is ${key}`);
// }

// for(let val of myMap.values()){
//     console.log(`Value is ${val}`);
// }

for(let [key, val] of myMap){
    console.log(`Key is ${key} and Value is ${val}`);
}

//it prints the values
myMap.forEach((key)=>{
    console.log(`${key}`);
})

myMap.forEach((v, k)=>{
    console.log(`${v} and key is ${k}`);
})