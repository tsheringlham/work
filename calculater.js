const prompt = require("prompt-sync")();
console.log("Calculator");
calculator = prompt("Enter what calculation you want to do: ");
num1 = parseInt(prompt("Enter the 1st number: "));
num2 = parseInt(prompt("Enter the 2nd number: "));



if (operation = "add") {
    result = num1 + num2;
    console.log(result);
} else if (operation = "subtract") {
    result = num1 - num2;
    console.log(result);
} else if (operation = "multiply") {
    result = num1 * num2;
    console.log(result);
} else if (operation = "divide") {
    if (num2 !== 0) {
        result = num1 / num2;
        console.log(result);
    } else {
        result = "Cannot divide by zero";
        console.log(result);
    }
} else {
    result = "Invalid operation";
    console.log(result);
}



