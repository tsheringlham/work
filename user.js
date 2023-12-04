const prompt = require("prompt-sync")();

   let response;
   let users = [];

   do{
    for(let i = 1; i <= 5; i++){
        let username = prompt("enter user name: ");
        users.push(username);
    }
    for( let k = 1; k <= 1; k++){
        console.log(users);
        let choice = prompt("choose from 0 - 4: ");
        if (choice == 0){
            console.log(users[0]);
        }else if(choice == 1){
            console.log(users[1])
        }else if(choice == 2){
            console.log(users[2])
        }else if(choice == 3){
            console.log(users[3])
        }else if(choice == 4){
            console.log(users[4])
        }
    }
    response = prompt ("if you want to continue press yes or else no");
   }while( response == 'yes')
