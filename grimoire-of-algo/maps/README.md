# 📘 Maps in JavaScript

JavaScript's `Map` object is a collection of key-value pairs where keys can be of any type. It maintains insertion order and provides efficient operations.

---

## 🧪 Creating a Map

```javascript
let myMap = new Map();

myMap.set(1, "Uno");
myMap.set(2, "Dos");
myMap.set(3, "Tres");
myMap.set(4, "Cuatro");
```

---

## 🔄 Retrieving Values and Keys from Maps

### Using `for...of` (returns key first):

```javascript
for (let [key, val] of myMap) {
    console.log(`Key is ${key} and Value is ${val}`);
}
```

### Using `forEach()` (returns value first):

```javascript
myMap.forEach((v, k) => {
    console.log(`${v} and key is ${k}`);
});
```

---

## ⏱️ Time Complexities

| Operation                           | Time Complexity | Notes                                                         |
|------------------------------------|------------------|---------------------------------------------------------------|
| `map.set(key, value)`              | **O(1)**         | Constant time to insert or update a key-value pair.           |
| `map.get(key)`                     | **O(1)**         | Constant time to retrieve the value associated with a key.    |
| `map.has(key)`                     | **O(1)**         | Constant time to check whether a key exists in the map.       |
| `map.delete(key)`                  | **O(1)**         | Constant time to remove a key-value pair.                     |
| `map.clear()`                      | **O(n)**         | Linear time, as it removes all entries from the map.          |
| `map.size`                         | **O(1)**         | Accessing the number of items is a constant-time operation.   |
| Iterating (`for...of`, `forEach()`) | **O(n)**         | Linear time, iterates over all entries in insertion order.    |
