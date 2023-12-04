const prompt = require("prompt-sync")();
const users = [];
let userCount = 0;

const max_users = [3]; 

let choice;
do {
    console.log("Log-in or sign up");
    choice = prompt(' ');

    if (choice === 'signup') {
        if (userCount < max_users) {
            signUp();
            userCount++;
        } else { 
            console.log("can signup only 3 user");
        }
    } else if (choice === 'login') {
        login();
    } else {
        console.log('Invalid choice.');
    }

    let x = prompt('want to use again (yes/no): ');
    console.log(' ');

    if (x !== 'yes') {
        break;
    }
} while (true);

function signUp() {
    const username = prompt("Username:");
    const password = prompt("Password:");

    if (users[username] !== undefined) {
        console.log("User already exists");
    } else {
        users[username] = password;
        console.log("Sign-up successful!");
    }
}

function login() {
    const username = prompt("Username:");
    const password = prompt("Password:");

    if (users[username] === undefined) {
        console.log("User not found");
    } else {
        if (users[username] === password) {
            console.log("Login successful!");
        } else {
            console.log("Incorrect password");
        }
    }
}