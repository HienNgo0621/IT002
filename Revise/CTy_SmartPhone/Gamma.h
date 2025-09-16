#pragma once
#include "CPU.h"
#include<iostream>

class Gamma : public CPU{
    public:       
        string loai() const override{
            return "Gamma";
        }
        unsigned char soCore() override{
            return '4';
        }
        float xungNhip() override{
            return 2.6;
        }
        unsigned long giaNhap() override{
            return 600;
        } 
        string hang() const override{
            return "White";
        }
};