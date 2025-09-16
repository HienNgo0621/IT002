#pragma once
#include "CPU.h"
#include<iostream>

class Alpha : public CPU{
    public:
        string loai() const override{
            return "Alpha";
        }
        unsigned char soCore() override{
            return '2';
        }
        float xungNhip() override{
            return 1.8;
        }
        unsigned long giaNhap() override{
            return 200;
        } 
        string hang() const override{
            return "Black";
        }
};