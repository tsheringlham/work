const prompt = require("prompt-sync")(); // function only

//define a function named 'greet
function greet(){
    console.log("Hello");
}
//call the 'greet function

let a,b, results; //global variables

a = parseInt(prompt("Enter 1st number: "));
b = parseInt(prompt("Enter 2nd number: "));

function add(){
    results = a + b;
    console.log("1st number + 2nd number: " + results);

    function sub(){
        results = a - b;
        console.log("1st number - 2nd number: " + results);
    }
    add();
    sub();
}