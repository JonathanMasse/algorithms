#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"
#include <iostream>

//throw "Any Message"

String::String(){
    //len = 0;
    //array = NULL;
    array = new char[1];
    array[0] = '\0';
    len = 0;
}

String::String(char* c){
    /*
    len = 0;
    while(c[len] != '\0'){
        len++;
    }
    array = new char[len];
    for(int i = 0; i<len;i++){
        array[i] = c[i];
    }
    */
    int length = 0;
    while (c[length])
        ++length;
    array = new char[length+1];
    for(int i = 0; i<length; i++){
        array[i] = c[i];
        len = length;
    }
}

String::String(char c){
    //array[0] = c;
    //len = 1;
    array = new char[2];
    array[0] = c;
    array[1] = '\0';
    len = 1;
}

String::~String(){
    delete[] array;
}

//O(n)
char String::at(int x) const{
    std::cout << x << std::endl;
    std::cout << len << std::endl;
    if(x >= 0 && x < len){
        return array[x];
    }
    else{
        //throw exception
        throw "Throw an exception";
    }
}

//O(1)
bool String::empty() const{
    if(len == 0){
        return true;
    }
    else{
        return false;
    }
}

//O(1)
unsigned int String::size() const{
    return len;
}

//O(1)
unsigned int String::capacity() const{
    return len;
}

//O(2n)
void String::reserve(unsigned int x){
    char* array2 = new char[len + x];
    for(int i = 0; i<len;i++){
        array2[i] = array[i];
    }
    for(int j = 0; j<x; j++){
        array2[j + len] = NULL;
    }
    array = array2;
}

void String::insert(char c, int x){
    char* array2 = new char[len + 1];
    for(int i = -1; i<len; i++){
        if(i == x){
            array2[i+1] = c;
        }
        else{
            array2[i+1] = array[i+1];
        }
    }
    array = array2;
}

void String::erase(char c){
    for(int i = 0; i <len; i++){
        if(array[i] == c){
            array[i] = NULL;
        }
    }
}

void String::remove(int x){
    //array[x] = NULL;
    for(int i = x; i<len-1; i++){
        array[i] = array[i+1];
    }
    array[len-1] = 0;
}

void String::append(char c){
    len++;
    char* array2 = new char[len];
    for(int i = 0; i<len;i++){
        array2[i] = array[i];
    }
    array2[len+1] = c;
    array = array2;
}

void String::prepend(char c){
    char* array2 = new char[len+1];
    array2[0] = c;
    for(int i = 1; i<len+1;i++){
        array2[i] = array[i];
    }
    array = array2;
}

bool String::compare(char* c) const{
    bool test = false;
    for(int i = 0; i<len; i++){
        if(array[i] != c[i]){
            return test;
        }
    }
    return true;
}

bool String::compare(String str) const{
    bool test = false;
    for(int i = 0; i<len; i++){
        if(0 != 0){
            return test;
        }
    }
    return true;
}

void String::concatenate(char*){

}

void String::concatenate(String str){

}

unsigned int String::find(char* c, int x) const{
    return 4;
}

unsigned int String::find(char c, int x) const{
    for(int i = 0; i<len; i++){
        if(array[i] == c){
            return i;
        }
        else{
            return len;
        }
    }
}

unsigned int String::find(String str, int x) const{
    return 4;
}

void String::reverse(){
    char* array2 = new char[len];
    for(int i = 0; i<len; i++){
        array2[i] = array[len-i-1];
    }
    array = array2;
}

void String::shift(int x){
    for(int i = 0; i<len; i++){
        array[i] += x;
    }
}

int String::toInt() const{
    return 4;
}

String String::substr(int x, int y) const{
    int z = y - x + 1;
    char* array2 = new char[z];
    for(int i = 0; i<z; i++){
        array2[i] = array[i+x];
    }
    return array2;
}