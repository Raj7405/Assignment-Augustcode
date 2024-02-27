let arr = [1,2,3,4,5,6]

const multiplyByTwo = (arr) => {
    let newArr = arr.map((num) => num * 2 )
    return newArr;
}

const multiplyByTwo_2 = (arr) => arr.map(num => num * 2);

const multiplyByTwo_3 = (arr) => {
    let newArr = [];
    arr.forEach((i) => {
        newArr.push(i*2);
    })
    return newArr;
}



console.log(`usning map function: [ ${multiplyByTwo(arr)} ]`);
console.log(`usin map one line: [ ${multiplyByTwo_2(arr)} ]`);
console.log(`usin forEach loop: [ ${multiplyByTwo_3(arr)}`);


