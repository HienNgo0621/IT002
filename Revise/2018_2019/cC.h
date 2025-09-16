#pragma once
#include "cYeuTo.h"
#include<iostream>
using namespace std;

class cC : public cYeuTo{
    public:
        cC(){}
        ~cC() {}
        string loai() {return "Tan chi tan tam (C)";}
        string thongTin() {
            if (chiso >= 70) return "Người có điểm cao ở yếu tố này thường là người chăm chỉ, có khả năng chịu áp lực tốt. Họ thường là người gắn bó, trung thành với tổ chức.";
            else if (chiso <= 30) return "Người có điểm thấp ở yếu tố này thường dễ bỏ cuộc, khả năng chịu áp lực, tuân thủ kỷ luật của tổ chức kém.";
            else return "Không xác định rõ";
        }
};