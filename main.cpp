#include <iostream>

using namespace std;

int main()
{
     int num1, num2, num3;
    num1= 6;
    num2= 5;
    num3= 10;
    int largest = 0;

    cout<< "\n\n Welcome to the largest of Three Program\n\n" << endl;
   //get the user's name
 string userName ="";
 cout << "\n Please enter your name: ";
 cin >> userName;
 cout << "\n Welcome " << userName << " to the Largest of Three game!";

 //get three ints from the user
 cout << "\n Please enter the first integar:";
 cin >> num1;
 cout << "\n\n Thank you for entering " << num1 << " as your first int!\n";

cout << "\n Please enter the first integar:";
cin >> num2;
 cout << "\n\n Thank you for entering " << num2 << " as your second int!\n";

cout << "\n Please enter the first integar:";
 cin >> num3;
 cout << "\n\n Thank you for entering " << num3 << " as your third int!\n";

  if(num1>num2){
        if(num1>num3)
        {
            largest = num1;
        }
        else
        {
            largest = num3;
        }
  }
  else
  {
        if (num2 < num3)
  {
      largest = num3;
  }
      else
      {
          largest = num2;
      }
  }

  cout << num1 << " " << num2 << " " << num3 << "this is your greatest number" << largest << endl;

  return 0;
}

