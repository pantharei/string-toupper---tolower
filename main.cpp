/*
The std::string function does not provide any function
to convert the underlying string to upper case or lower case. 
Write two functions that provide this behavior. 
Both functions return a copy of the converted string. 
In case of error, return an empty string.

std::string ToUpper(const std::string &str) ;
std::string ToLower(const std::string &str) ;
Hint : Use toupper & tolower from C string library.
*/

#include <iostream>
#include <cstring>

std::string ToUpper(const std::string &str){
    
    char* tmp = new char[str.size()+1],* start{tmp};
    strcpy(tmp, str.c_str());
    while(*tmp != '\0'){
        *tmp = toupper(*tmp);
        ++tmp;
    }
    return std::string{start};
}

std::string ToLower(const std::string &str){
    char* tmp = new char[str.size()+1],* start{tmp};
    strcpy(tmp, str.c_str());
    while(*tmp != '\0'){
        *tmp = tolower(*tmp);
        ++tmp;
    }
    return std::string{start};
}

int main(){

    std::string str{"ciao"};
    std::string s = ToUpper(str);

    std::cout << s << std::endl;

    std::cout << "Ora torniamo a lower..\n";
    std::cout << ToLower(s) << std::endl;

    return 0;
}