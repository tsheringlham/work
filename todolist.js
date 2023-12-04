const prompt = require("prompt-sync")();

const activitySchedule = {
    'wake up': '6:00 AM',
    'eat breakfast': '7:30 AM',
    'reach class': '8:45 AM',
    'class starts': '9:00 AM',
    'first break': '10:30 AM',
    'lunch break': '1:00 PM',
    'second break': '3:30 PM',
    'classes end': '5:00 PM',
    'reach home': '5:45 PM',
    'dinner': '8:00 PM',
    'study': '8:30 PM',
    'prepare for bed': '10:00 PM',
    'sleep': '10:30 PM'
  };
  
  let continueRoutine;
  
  do {
    const userInput = prompt('Enter an  Daily activity:').toLowerCase();
    let message;
  
    switch (userInput) {
      case 'wake up':
      case ' breakfast':
      case 'reach class':
      case 'class starts':
      case 'first break':
      case 'lunch break':
      case 'second break':
      case 'classes end':
      case 'reach home':
      case 'dinner':
      case 'study':
      case 'prepare for bed':
      case 'sleep':
        message = `Time: ${activitySchedule[userInput]}`;
        break;
      default:
        message = `Daily Activity '${userInput}' not found in the schedule.`;
    }
  
    console.log(message);
  
    const continueInput = prompt('Do you want to continue? (yes/no)').toLowerCase();
    continueRoutine = continueInput === 'yes';
  } while (continueRoutine);