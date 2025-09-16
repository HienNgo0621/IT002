#pragma once
#include "cYeuTo.h"
#include<iostream>
using namespace std;

class cO : public cYeuTo{
    public:
        cO(){}
        ~cO() {}
        string loai() {return "San sang trai nghiem (O)";}
        string thongTin() {
            if (chiso >= 70) return "Người có điểm cao ở yếu tố này thường là người thích những ý tưởng mới, thích hiểu biết nhiều lĩnh vực nhưng đồng thời cũng thích tự do, không thích bị ràng buộc…";
            else if (chiso <= 30) return "Người có điểm thấp ở yếu tố này thường khá bảo thủ, khó tiếp nhận những ý tưởng mới, lạ. Họ thích sự ổn định, quen thuộc và thực tế.";
            else return "Không xác định rõ";
        }
};