#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>
#include <iomanip>
using namespace std;

struct HawaiiMountainApple{
string description = "Coming straight from the lush mountains of Hawaii, the Hawaii Mountain Apple is shaped more like a bell pepper than an apple, but don't let it's shape fool you because it certainly is tasty. The apple actually originated from South-East Asia, and found its way to Hawaii about 1,000 - 1,700 years ago! This apple grows on trees and are pink to red in color. The taste can be described as as mildly sweet, and the texture is similar to a pear. They are available year-round.";
}Hawaii;

struct BlackDiamondApple{
string description = "Arguably the most mysterious looking apple on the list comes from exquisite mountains of Nyingchi, Tibet. The Black Diamond Apple gets its color as the result of the turbulent temperature changes found in the region, and it's actually a very deep purple rather than black with a white pulp. The tree for this apple takes 7-8 years to mature, only being available for 2 months after that time frame! Black Diamonds are crunchier and sweeter than the standard apple.";
}Tibet;

struct SekaiIchiApple{
string description = "Hailing from the Land of the Rising Sun, the Sekai Ichi Apple was first bred in 1974 in Morioka, Japan. This apple is ginormous compared to the rest, and it's consistenly rounder also. The apple is striped pale pink-red with hints of yellow. The Sekai Ichi Apple is sweet, juicy, and fairlysoft in feel. The apple can reach up to 2 pounds! This results in the tree harvesting a few every year. They are available fall to early winter.";
}Japan;

struct CaimitoStarApple{
string description = "The Caimito Star Apple is native to the Carribeans, Central America, and South-East Asia. The tree for this apple takes around 5 - 10 years to grow! This apple can be green or purple, and it inherits its name from the star-shaped pulp. The taste expressed like that of lychee or pear. The availability is from later winter to early summer. Surprisingly, you're only supposed to eat the pulp of the apple rather than the skin because it contains a latex substance.";
}Carribeans;

struct RedloveApple{
string description = "Markus Kobelt of Switzerland spent over 20 years developing the Redlove Apple, and they finally were available to the public in 2010. This apple was first produced in the cooly mountains of Rhine Valley, Switzerland. The apple is available from fall to winter. The skin of this apple is glossy and dark red. However, the pulp is what stands out the most because the inside is red with a pinkish white spiral! The apple is crisp and tart in taste.";
};

class transaction {
  public:
    int HMA, BDA, SIA, CSA, RLA;
    int intlfee, ntlfee;
    int total;
    int multiplier;
    int multipliertotal;
    string choiceapple;
    string choiceshipping;

  void gettransaction(){
    HMA = 5;
    BDA = 15;
    SIA = 20;
    CSA = 10;
    RLA = 15;
    intlfee = 30;
    ntlfee = 25;

    cout << "Product" << setw(25) << "Price per Unit" << setw(15) << "Quantity" << setw(20) << "Shipping fee \n";
    cout << "HMA" << setw(17) << "$5" << setw(25) << "Choose" << setw(22) << "nat fee: $25 \n";
    cout << "BDA" << setw(18) << "$15" << setw(24) << "Choose" << setw(23) << "intl fee: $30 \n";
    cout << "SIA" << setw(18) << "$20" << setw(26) << "Choose \n"; 
    cout << "CSA" << setw(18) << "$10" << setw(26) << "Choose \n";
    cout << "RLA" << setw(18) << "$15" << setw(26) << "Choose \n";    
    cout << "Enter apple: ";
    cin >> choiceapple;


    if(choiceapple == "HMA" || choiceapple == "hma" || choiceapple == "Hma"){
      cout << "Enter number for quantity: ";
      cin >> multiplier;
      cout << "are you shipping nationally (Canada) or internationally? (enter ntl OR intl): ";
      cin >> choiceshipping;
      
      if(choiceshipping == "ntl"){
        total = (HMA * multiplier) + ntlfee;
        cout << "Hawaii Mountain Apple: $" << HMA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << ntlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";
      }
      
      if(choiceshipping == "intl"){
        total = (HMA * multiplier) + intlfee;
        cout << "Hawaii Mountain Apple: $" << HMA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << intlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";
      }
    }

    if(choiceapple == "BDA" || choiceapple == "bda" || choiceapple == "Bda"){
      cout << "Enter number for quantity: ";
      cin >> multiplier;
      cout << "are you shipping nationally (Canada) or internationally? (enter ntl OR intl): ";
      cin >> choiceshipping;
      
      if(choiceshipping == "ntl"){
        total = (BDA * multiplier) + ntlfee;
        cout << "Black Diamond Apple: $" << BDA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << ntlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";
      }
      
      if(choiceshipping == "intl"){
        total = (BDA * multiplier) + intlfee;
        cout << "Black Diamond Apple: $" << BDA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << intlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";
      }
    }

    if(choiceapple == "SIA" || choiceapple == "sia" || choiceapple == "Sia"){
      cout << "Enter number for quantity: ";
      cin >> multiplier;
      cout << "are you shipping nationally (Canada) or internationally? (enter ntl OR intl): ";
      cin >> choiceshipping;
      
      if(choiceshipping == "ntl"){
        total = (SIA * multiplier) + ntlfee;
        cout << "Sekai Ichi Apple: $" << SIA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << ntlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";      
        }
      
      if(choiceshipping == "intl"){
        total = (SIA * multiplier) + intlfee;
        cout << "Sekai Ichi Apple: $" << SIA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << intlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";      
        }
    }

    if(choiceapple == "CSA" || choiceapple == "csa" || choiceapple == "Csa"){
      cout << "Enter number for quantity: ";
      cin >> multiplier;
      cout << "are you shipping nationally (Canada) or internationally? (enter ntl OR intl): ";
      cin >> choiceshipping;
      
      if(choiceshipping == "ntl"){
        multiplier = 
        total = (CSA * multiplier) + ntlfee;
        cout << "Caimito Star Apple: $" << CSA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << ntlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";
      }
      
      if(choiceshipping == "intl"){
        total = (CSA * multiplier) + intlfee;
        cout << "Caimito Star Apple: $" << CSA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << intlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";
      }
    }

    if(choiceapple == "RLA" || choiceapple == "Rla" || choiceapple == "rla"){
      cout << "Enter number for quantity: ";
      cin >> multiplier;
      cout << "are you shipping nationally (Canada) or internationally? (enter ntl OR intl): ";
      cin >> choiceshipping;
      
      if(choiceshipping == "ntl"){
        total = (RLA * multiplier) + ntlfee;
        cout << "Redlove Apple: $" << RLA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << ntlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";
      }
      
      if(choiceshipping == "intl"){
        total = (RLA * multiplier) + intlfee;
        cout << "Redlove Apple: $" << RLA << " \n";
        cout << "Quantity: " << multiplier << " \n";
        cout << "shipping fee: " << intlfee << " \n";
        cout << "__________________________ \n";
        cout << "your total is: $" << total << " \n";
      }
    }

  }

};

struct aboutpage{
string description = "At Abrar's Ample Apples, we do our best to find the most exotic and delicious apples around the world, and provide them to you. Whether it be from the highest mountains or from the lowest fields. \n";
}about;

int main() {
  string choice1;
  int choice2;
  string choice3;
  string choice4;
  int choicedesc;
  string choiceteam;
  RedloveApple *ptr, Switzerland;
  ptr = &Switzerland;

  int rows = 3;
  int columns = 4;
  

  cout <<"                         __ _ _ __  _ __| | ___ \n" ;
  sleep(1);
  cout <<"                       / _` | '_ || '_ || |/ _ |  \n";
  sleep(1);
  cout <<"                      | (_| | |_) | |_) | |  __/ \n";
  sleep(1);
  cout <<"                       | __,_| .__/| .__/|_||___| \n";
  sleep(1);
  cout <<"                           |_|   |_|             \n";
  cout << " \n";
  cout << " \n";
  
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
          cout << setw(15) << "*";
        }
      cout << endl;
    }        

cout << " \n";
cout << " \n";
cout << "Do you agree to special apple cookies for AbrarsAmpleApples.ca \n";
cout << "(NO = KICKED FROM SITE) (Y/N): ";
cin >> choice1;
cout << " \n";
cout << " \n";

while(choice1 == "N" || choice1 == "n"){
  cout << "Come back when you're ready to accept the special apple cookies buddy. \n";
  break;
}

while(choice1 == "Y" || choice1 == "y"){
  cout.width(50);cout << "Welcome to AbrarsAmpleApples (AAA), where we sell the yummiest and tastiest apples from far and wide!!! \n";
  cout << " \n";
  cout.width(50); cout << "1. Apples Description \n";
  cout.width(50); cout << "2. Company staff \n";
  cout.width(50); cout << "3. Buy an AAA \n";
  cout.width(50); cout << "4. About page \n";
  cout.width(50); cout << "5. Exit the site \n";
  cout << "Enter number: ";
  cin >> choice2;
  cout << " \n";

  while(choice2 < 1 || choice2 > 5){
    cout << "try again: ";
    cin >> choice2;
  }


  
  while(choice2 == 1){
    system("clear");
    cout << "Apples description: ";
    cout << " \n";
    cout.width(50); cout << "1. Hawaii Mountain Apple \n";
    cout.width(50); cout << "2. Black Diamond Apple \n";
    cout.width(50); cout << "3. Sekai Ichi Apple \n";
    cout.width(50); cout << "4. Caimito Star Apple \n";
    cout.width(50); cout << "5. Redlove Apple \n";
    cout.width(50); cout << "6. Type 6 to go back to main menu... \n";
    cout << "Pick an apple or exit: ";
    cin >> choicedesc;

    while(choicedesc < 1 || choicedesc > 6){
      cout << "try again: ";
      cin >> choicedesc;
    }
    
    if(choicedesc == 6){
      system("clear");
      break;
    }

    if(choicedesc == 1){
      cout << Hawaii.description;
      cout << " \n";
      cout << "Type 1 to return back to apple description: ";
      cin >> choice2;
      }
    if(choicedesc == 2){
      cout << Tibet.description;
      cout << " \n";
      cout << "Type 1 to return back to apple description: ";
      cin >> choice2;
      }
    if(choicedesc == 3){
      cout << Japan.description;
      cout << " \n";
      cout << "Type 1 to return back to apple description: ";
      cin >> choice2;
      }
    if(choicedesc == 4){
      cout << Carribeans.description;
      cout << " \n";
      cout << "Type 1 to return back to apple description: ";
      cin >> choice2;
      }
    if(choicedesc == 5){
      cout << (*ptr).description;
      cout << " \n";
      cout << "Type 1 to return back to apple description: ";
      cin >> choice2;
      }

    

}



  while(choice2 == 2){
    system("clear");
    cout << "FOUNDER: \n";
    cout << "Abrar Murad (couldn't have done it without the team) \n";
    
    cout << " \n";
    cout << " \n";

   string exec[4] = {"Daniyal Bukhari", "Ifaz Chowdhury", "Eisaar Elahi", "Jameel Syed"};
  cout << "EXECUTIVES: \n";
  for (int i = 0; i < 4; i++){ 
    cout << exec[i] << "\n";
    }
    
    cout << " \n";
    cout << " \n";
    
    char const *board[5] = {"Gaz Gala", "Frank Fuji", "Mac McIntosh", "Hermann Honeycrisp", "Granny Smith" };
    cout << "BOARD of DIRECTORS: \n";
    for (int j = 0; j < 5; j++){
      cout << board[j] << " \n";
      }
      
    cout << " \n";
    cout << " \n";

  cout << "Type exit to go back to the main menu... \n";
  cout << "Enter here: ";
  cin >> choiceteam;

    if (choiceteam == "exit" || choiceteam == "Exit" || choiceteam == "EXIT"){
      system("clear");
      break;
    }

    else{
      cout << "try again: ";
      cin >> choiceteam;
    }
 
      
    
  
  }



  while(choice2 == 3){
  system("clear");
  transaction c1;
  c1.gettransaction();

  cout << "Would you like to make another purchase? (Y/N): ";
  cin >> choice3;

  if(choice3 == "Y" || choice3 == "y"){
    continue;
  }

 if(choice3 == "N" || choice3 == "n"){
   break;
 }
   
 }



  while(choice2 == 4){
  system("clear");
  cout << about.description;
  
  cout << "Type exit to go back to the main menu... \n";
  cout << "Enter here: ";
  cin >> choice4;

  if(choice4 == "Exit" || choice4 == "exit" || choice4 == "EXIT"){
    break;
  }

  else{
   cout << "try again: ";
   cin >> choice4;
  }
    
}


  
  if(choice2 == 5){
  cout <<"                         __ _ _ __  _ __| | ___ \n" ;
  sleep(1);
  cout <<"                       / _` | '_ || '_ || |/ _ |  \n";
  sleep(1);
  cout <<"                      | (_| | |_) | |_) | |  __/ \n";
  sleep(1);
  cout <<"                       | __,_| .__/| .__/|_||___| \n";
  sleep(1);
  cout <<"                           |_|   |_|             \n";
  cout << " \n";
  cout << " \n";
  
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
          cout << setw(15) << "*";
        }
      cout << endl;
    } 
   break;
 }
  
}
  cout << " \n";
  cout.width(48);cout << "We hope to see you again!";
}

    