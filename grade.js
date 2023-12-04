const prompt = require("prompt-sync")();
let Input = true;

let A = console.log("Grade A:100-90");
let B = console.log("Grade B:89-60");
let C = console.log("Grade C:59-30");
let D = console.log("Grade D:29-10");
let E = console.log("Grade E:10-1");


while (Input) {
    
  let marks = prompt("Enter your marks:");
 

  if (marks !== null && marks !== "") {


    if (marks >= 90 && marks <= 100) {
      console.log("Grade A");
    } else if (marks >= 80 && marks < 90) {
      console.log("Grade B");
    } else if (marks >= 70 && marks < 80) {
      console.log("Grade C");
    } else if (marks >= 55 && marks < 70) {
      console.log("Grade D");
    } else if (marks < 55 && marks >= 0) {
      console.log("Grade E");
    } else {
      console.log("Invalid input! Marks should be between 0 and 100");
    }

    let userInput = prompt("Do you want to continue? (yes/no)");

    if (userInput.toLowerCase() !== "yes") {
      Input = false;
      console.log("Exiting program...");
    }
  } 
}