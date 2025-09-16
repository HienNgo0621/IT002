#pragma once
#include "cYeuTo.h"
#include<iostream>
using namespace std;

class cE : public cYeuTo{
    public:
        cE(){}
        ~cE() {}
        string loai() {return "Huong ngoai (E)";}
        string thongTin() {
            if (chiso >= 70) return "Người có điểm cao ở yếu tố này thường là người nhiệt tình, năng động, giao tiếp tốt, thích thể hiện bản thân.";
            else if (chiso <= 30) return "Người có điểm thấp ở yếu tố này thường ngại giao tiếp, không thích sự nổi bật, thích được làm việc độc lập.";
            else return "Không xác định rõ";
        }
};