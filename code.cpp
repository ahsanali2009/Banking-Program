#include <iostream>
#include <iomanip>


double userBalance = 0;

// function for storing the balance in the bank account.

void checkBalance () {

    std::cout << std::endl << "My Balance : $ " << std::setprecision(2) << ::userBalance << std::fixed << std::endl << std::endl;

}

//function to deposit money in the bank account.

void depositFund () {

double addFund ;

std::cout << std::endl  << "Enter Amount To Deposit : \n \n" ;
std::cin >> addFund ;

for(int i = 0 ; addFund < 0 ; i++){  // for loop used here for if user enters fund less than 0 .

    std::cout << "Funds Can't Be Less Than 0, Please Try Again." << std::endl ;
    std::cout << "Enter Amount To Deposit : \n" ;
    std::cin >> addFund ;

}

userBalance = addFund + userBalance ;
std::cout << std::endl << "You Deposited $" << userBalance << std::endl <<std::endl ; // display message.

}

// function to withdraw money from the bank account.

void withdrawFund () { 

double getFund ;
std::cout << "How Much Money You Want To Withdraw : " ;
std::cin >> getFund ;


if(getFund > userBalance ){ // condition , if user withdraws money more than their balance.

    for(int i = 0 ; getFund > userBalance;) {

        std::cout << "Insufficient Balance ! Try Again \n" ;
        std::cout << "How Much Money You Want To Withdraw : " ;
        std::cin >> getFund ;

    }
    
}

if(getFund < 0 ){   // condition , if user withdraws money less than zero .]].

    for(int i = 0 ; getFund < 0;) {

        std::cout << "Funds Can't Be Less Than 0. Try Again! \n" ;
        std::cout << "How Much Money You Want To Withdraw : " ;
        std::cin >> getFund ;

    }
    
}

userBalance = userBalance - getFund ;
std::cout << std::endl << "You Have Withdrawn $" << getFund << " , You Are Left With  $" << userBalance << std::endl <<std::endl ; //dispaly messsage

}

// main fucntion starts from here.

int main () {

    int userChoice ;

// do-while loop to keep executing again and again untill the user exits the program (4).

do {

    std::cout << "What Do You Want To Do : " << std::endl << std::endl ;
    
    std::cout << "1. Check Balance \n" ;
    std::cout <<  "2. Deposit Funds \n" ;
    std::cout << "3. Withdraw Funds \n" ;
    std::cout << "4. Exit \n" ;

    std::cout << "--------------------------------------------------------" << std::endl ;

    std::cin >> userChoice ;
   
    switch (userChoice) {

    case 1 : 

    checkBalance();  

    break;

    case 2 :

    depositFund() ;

    break;

    case 3 : 

    withdrawFund() ;

    break;

    case 4 :

    std::cout << std::endl << "Thanks For Using The ATM , Come Back Later !";

    break;

    }
        }

while ( userChoice != 4 ) ;

}