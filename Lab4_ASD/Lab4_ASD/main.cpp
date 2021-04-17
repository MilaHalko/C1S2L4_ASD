#include "allLibs.hpp"
#include "classList.hpp"
#include "functions.hpp"

int main() {
    
    string str = ChooseStr();
    List words;
    PushWords(str, words);
    
    cout << "\nWords in list: '";
    words.Print();
    cout << "'" << endl;
    
    int length;
    cout << "\nWrite word's length (all words with this length will be deleted): "; cin >> length;
        
    words.Search_and_Delete(length);
    
    cout << "\nFinal string:  '";
    words.Print();
    cout << "'" << endl;
    
    return 0;
}
