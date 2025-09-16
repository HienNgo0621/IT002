#pragma once
#include "cYeuTo.h"
#include<iostream>
using namespace std;

class cA : public cYeuTo{
    public:
        cA(){}
        ~cA() {}
        string loai() {return "Hoa dong de chiu (A)";}
        string thongTin() {
            if (chiso >= 70) return "Người có điểm cao ở yếu tố này thường thân thiện, cởi mở, đồng cảm với mọi người nhưng nhiều khi “thiếu chính kiến\".";
            else if (chiso <= 30) return "Người có điểm thấp thường đặt lợi ích của bản thân lên trên, ít đồng cảm, chia sẻ với đồng nghiệp, có tính cạnh tranh cao.";
            else return "Không xác định rõ";
        }
};