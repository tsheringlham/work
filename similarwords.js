const prompt = require("prompt-sync")();

// let keepSearching = true;

// do {
//   let word1 = prompt("First word:");
//   let word2 = prompt("Second word:");

//   let similarCount = 0;
//   for (let i = 0; i < word1.length; i++) {
//     const letter = word1[i];
//     let word2Array = word2.split(''); 

//     for (let j = 0; j < word2Array.length; j++) {
//       if (letter === word2Array[j]){
//         similarCount++;
//         word2Array.splice(j, 1);
//         break;
//       }
//     }
//   }
//   console.log(
//     `${word1}+${word2}: ${similarCount}`
//   );

//   let continueInput = prompt("Do you want to compare more words? (yes/no)");
//   if (continueInput !== 'yes') {
//     keepSearching = false;
//   }
// } while (keepSearching);

//example given by teacher
let count = 0;

console.log("similar words\n");

let word1 = prompt("word1: ");
let word2 = prompt("word1: ");

if(word1.length !== word2.length){
    console.log("please enter words of the same length.");
}else{
    for(let i = 0; i < word1.length; i++);
    if(word1[i] === word2[i]){
        count++;
    }
}
console.log("")
