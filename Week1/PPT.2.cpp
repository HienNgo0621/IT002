#include<iostream>
using namespace std;

void func (int i, int j = 0){
cout << "So nguyen: " << i << j << endl;
}

void func (float i = 0, float j = 0){
cout << "So thuc: " << i << j << endl;
}

int main(){
int i = 1, j = 2;
float f = 1.5, g = 2.5;
func(); //0 0
func(i); //1 0
func(f); //1.5 0
func(i, j); //1 2
func(f, g); //1.5 2.5

system("pause");
return 0;
}