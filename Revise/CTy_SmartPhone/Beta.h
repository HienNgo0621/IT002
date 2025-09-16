#pragma once
#include "CPU.h"
#include<iostream>

class Beta : public CPU{
    public:
        string loai() const override{
            return "Beta";
        }
        unsigned char soCore() override{
            return '4';
        }
        float xungNhip() override{
            return 2.46;
        }
        unsigned long giaNhap() override{
            return 400;
        } 
        string hang() const override{
            return "Black";
        }
};