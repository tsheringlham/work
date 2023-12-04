function plan(){
    //plan function
    return "hello"; // resurn will pass the value
}
console.log(plan()); //parameter it will put 

function plan(name , age){
    return "hello"+" "+name+ '\nage: '+age;
}
let nmae = "soyang";
let age = 23;
console.log(plan(nmae,age));

function addnumbers(a ,b){
    let sum = a + b;
    return sum;
}
//calling the function
console.log(addnumbers());



function add(a = 1, b = 4){
    let sum = a + b;
    return sum;
}
// console.log(add(5,3));//output is 8 because it replace the frist one
console.log(add(3));
console.log(add(5,undefined));
console.log(add(5,null));
console.log(add());




