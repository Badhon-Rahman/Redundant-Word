#include <iostream>

using namespace std;

int RedundantWord(char str[], int checked){
    int strSize = sizeof(str) / sizeof(str[0]) - 1;
    cout << strSize ;
    string tempStr = "";
    string tempChecker = "";

    if(checked < strSize){
      while(str[checked] != ' '){
        tempStr.push_back(str[checked]);
        //cout << str[checked] << endl;
        checked++;

      }
       int x = checked + 1;
        while(str[x] != ' '){
            tempChecker.push_back(str[x]);
            //cout << str[x] << endl;
            x++;
        }
        if(tempStr == tempChecker){
            return 1;
        }
      return  RedundantWord(str, checked + 1);
    }
    else{
        return 0;
    }


}

int main()
{
    char str[] = "Bangladesh is our mother our land." ;
    int redundant = RedundantWord(str, 0);
    if(redundant == 1){
        cout << "This string has redundant word." << endl;
    }
    else if(redundant == 0){
        cout << "This string does not have any redundant word." << endl;
    }
    return 0;
}
