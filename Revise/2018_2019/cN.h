#pragma once
#include "cYeuTo.h"
#include<iostream>
using namespace std;

class cN : public cYeuTo{
    public:
        cN(){}
        ~cN() {}
        string loai() {return "Bat on cam xuc (N)";}
        string thongTin() {
            if (chiso >= 70) return "Người có điểm cao ở yếu tố này thường có các cảm xúc tiêu cực như: lo lắng, bực bội, tự ti, yếu đuối và khả năng chịu áp lực kém.";
            else if (chiso <= 30) return "Người có điểm thấp ở yếu tố này thường kiểm soát được cảm xúc, ứng phó với căng thẳng tốt, ít bị bên ngoài ảnh hưởng đến tâm trạng của bản thân.";
            else return "Không xác định rõ";
        }
};