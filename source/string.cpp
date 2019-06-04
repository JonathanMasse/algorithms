#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"

int len = 0;

String::String(){
    len = 0;
    array = NULL;
}

String::String(char* c){
    len = 0;
    while(c[len] != '\0'){
        len++;
    }
    array = new char[len];
    for(int i = 0; i<len;i++){
        array[i] = c[i];
    }
}

String::String(char c){
    array[0] = c;
    len = 1;
}

String::~String(){
    if(len > 0){
        delete[] array;
    }
}

//O(n)
char String::at(int x) const{
    if(x < len){
        return array[x-1];
    }
    else{
         return NULL;
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
    array[x] =
}

void String::append(char c){
    char* array2 = new char[len];
    for(int i = 0; i<len;i++){
        array2[i] = array[i];
    }
    array2[len] = c;
    array = array2;
}

void String::prepend(char c){

}

bool String::compare(char* c) const{
    return true;
}

bool String::compare(String str) const{
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
    return 4;
}

unsigned int String::find(String str, int x) const{
    return 4;
}

void String::reverse(){

}

void String::shift(int){

}

int String::toInt() const{
    return 4;
}

String String::substr(int x, int y) const{
    return "hello";
}