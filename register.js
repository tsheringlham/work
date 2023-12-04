const prompt=require("prompt-sync")();
let users={};

let choice;
do{
    console.log("log-in or register");
    choice=prompt(' ');

    if(choice === 'register'){
        register();
    }else if(choice === 'login'){
        login();
    }else{
        console.log("Invalid");
    }

    let you=prompt("Want to continue(yes/no: ");
    console.log('');

    if(you != 'yes'){
    break;
    }
}while(true);

function register(){
    const username=prompt('Username: ');
    const password=prompt('Password: ');

    if(users[username] !== undefined){
        console.log("User already exists.");
    }else{
        users[username] == password;
        console.log("registration successful");
    }
}
    function login(){
        const username=prompt('Username: ');
        const password=prompt('Password: ');
    
        if(users[username] !== undefined){
            console.log("User not found. Please register first.");
        }else{
            if(users[username] == password){
            console.log("login successful");
        }else{
            console.log("Incorrect Password");
        }
    }

}