const prompt = require("prompt-sync")();


let EMPLOYEE_NAME = [];
let EMPLOYEE_ID = 1; 
let DATE = [];

function addEmployee(name, date) {
    EMPLOYEE_NAME.push(name);
    DATE.push(date);
    console.log("Employee added successfully!");
    console.log(`Employee ID: ${EMPLOYEE_ID}\nEmployee Name: ${name}\nDate: ${date}\n`);
     
}

do {
    console.log("\t\t\tEMPLOYEE MANAGEMENT SYSTEM \t\t\t\n");
    console.log("\t\t\t\tEMPLOYEE LIST\t\t\t\t\n");
    console.log(" EMPLOYEE NAME:\t\tEMPLOYEE ID:\t\tDATE: \n");

    for (let i = 0; i < EMPLOYEE_NAME.length; i++) {
        console.log(` ${EMPLOYEE_NAME[i]}\t\t\t ${EMPLOYEE_ID + i}\t\t\t ${DATE[i]}`);
    }

    console.log("\n 1. ADD EMPLOYEE\n2. REMOVE EMPLOYEE\n3. UPDATE EMPLOYEE");

    let choice = parseInt(prompt("\nChoose from 1 - 3: "));

    switch (choice) {
        case 1:
            console.log("\n1.ADD EMPLOYEE\n");
            let employeeName = prompt("Enter employee name:");
            let employeeDate = prompt("Enter employee date:");
            addEmployee(employeeName, employeeDate);
            break;
        case 2:
            console.log("\n2.REMOVE EMPLOYEE\n");
            let removeEmployeeId = parseInt(prompt("Enter the ID of the employee to remove:"));
            let indexToRemove = removeEmployeeId - 1;

            if (indexToRemove >= 0 && indexToRemove < EMPLOYEE_NAME.length) {
                EMPLOYEE_NAME.splice(indexToRemove, 1);
                DATE.splice(indexToRemove, 1);
                console.log(`Employee with ID ${removeEmployeeId} removed successfully.`);
            } else {
                console.log("Invalid employee ID. Please try again.");
            }
            break;
        case 3:
            console.log("\n3.UPDATE EMPLOYEE\n");
            let updateEmployeeId = parseInt(prompt("Enter the ID of the employee to update:"));
            let indexToUpdate = updateEmployeeId - 1;

            if (indexToUpdate >= 0 && indexToUpdate < EMPLOYEE_NAME.length) {
                let updatedName = prompt("Enter the updated employee name:");
                let updatedDate = prompt("Enter the updated employee date:");

                EMPLOYEE_NAME[indexToUpdate] = updatedName;
                DATE[indexToUpdate] = updatedDate;

                console.log(`Employee with ID ${updateEmployeeId} updated successfully.`);
            } else {
                console.log("Invalid employee ID. Please try again.");
            }
            break;
        }

            const continueInput = prompt('DO YOU WANT TO CONTINUE? (yes/no)');
            choose = continueInput === 'yes';
          } while (choose);