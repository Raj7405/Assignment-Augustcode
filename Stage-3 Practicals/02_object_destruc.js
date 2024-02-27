const student = {
    name: "John Doe",
    age: 20,
    grades: {
      math: 90,
      science: 85,
      english: 92
    }
  };
  // function arrToObj(arr){
  //   const obj = {};
  //   arr.forEach((value, index)=> {
  //       obj[index] = value;
  //   });
  //   return obj;
  // }

  function getStudentinfo({name, age, grades: {math}}){
    // const student_1 = [name, age, math]
    // return arrToObj(student_1)
    return {name, age, grades:{math}}  
  }

  console.log( getStudentinfo(student))