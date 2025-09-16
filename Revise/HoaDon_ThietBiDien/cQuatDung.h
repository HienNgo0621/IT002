#pragma once
#include "cQuat.h"
#include<iostream>
using namespace std;

class cQuatDung : public cQuat{  
    public:
        string loai() {return "Ma quat dung";}
        unsigned long donGia() {return 500;}
};
    
