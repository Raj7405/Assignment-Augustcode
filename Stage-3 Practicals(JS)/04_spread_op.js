const arr1 = [1,2,3,4,5];
const arr2 = [6,7,8,9,10];
const arr3 = ['raj', 'pooja', 'sammed', 'saurabh', 'kalyani']

//spread oprator
let meargeArr = [...arr1, ...arr2]

console.log(meargeArr)

//rest operator
const mergeArrays = (...arrays) => {
    return arrays.reduce((mergedArray, currentArray) => [...mergedArray, ...currentArray], []);
};


const newArr = mergeArrays(arr1, arr2, arr3)
console.log(newArr)