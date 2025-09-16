#include<iostream>
using namespace std;

class IntArr {
    private:
        int count; //tổng số lượng phần tử có trong values
        int * values; //mảng các số nguyên đang có trong đối tượng hiện tại
    public:
        IntArr(int cnt = 0, int val = 0) : count(cnt) {
            if (cnt > 0) {
                values = new int [cnt];
                for (int i = 0; i < cnt; i ++)
                {
                    values[i] = val;
                }
            } else values = nullptr;
        }

        // IntArr(const IntArr &a) : count (a.count){
        //     if (a.count > 0){
        //         values = new int [a.count];
        //         for (int i = 0; i < a.count; i ++){
        //             values[i] = a.values[i];
        //         }
        //     } else values = nullptr;
        // }

        // IntArr operator = (const IntArr& a){
        //     if (this != &a){
        //         delete[] values;
        //     }
        //     count = a.count;
        //     if (count > 0){
        //         values = new int [count];
        //         for (int i = 0; i < count; i ++){
        //             values[i] = a.values[i];
        //         }
        //     } else values = nullptr;
        //     return *this;
        // }

        ~IntArr(){
            delete[] values;
        }

        IntArr concat(const IntArr &a){
            IntArr t;
            t.count = count + a.count;
            t.values = new int [count + a.count];
            int j = 0;
            for (int i = 0; i < count; i ++){
                t.values[j ++] = values[i];
            }
            for (int i = 0; i < a.count; i ++){
                t.values[j ++] = a.values[i];
            }
            return t;
        }

        void push(int n){
            int* newVal = new int [count + 1];
            for (int i = 0; i < count; i ++){
                newVal[i] = values[i];
            }
            delete[] values;
            values = newVal;
            values[count++] = n;
        }
        
        friend istream& operator>> (istream& in, IntArr &a);
        friend ostream& operator << (ostream& out, const IntArr& a);
};

istream &operator >> (istream& in, IntArr &a){
    delete[] a.values;
    in >> a.count;
    a.values = new int[a.count];
    for (int i = 0; i < a.count; i ++){
        in >> a.values[i];
    }
    return  in;
}

ostream& operator << (ostream& out, const IntArr& a){
    for (int i = 0; i < a.count; i ++){
        out << a.values[i] << " ";
    }
    out << endl;
    return out;
}

int main() {
    IntArr l1;//tạo mảng không chứa bất kì phần tử nào
    IntArr l2(3,2);// tạo một mảng với 3 phần tử, tất cả phần tử đều có giá trị là 2
    IntArr l3(2);//tạo một mảng với 2 phần tử, tất cả phần tử đều có giá trị là 0
    IntArr l4 = l2.concat(l3);//tạo ra một IntArr mới có nội dung là kết quả của việc nối các phần tử l3 vào cuối các phần tử của l2 theo thứ tự
    l2.push(3);//thêm số 3 vào cuối danh sách trong đối tượng l2
    cout << l4;
    cin >> l2;//Xoá các giá trị hiện có trong l2 và cho phép người dùng nhập số lượng phần tử mới và giá trị các phần tử mới vào l2 (cần xoá các vùng nhớ không sử dụng nếu có)
    cout << l2;//in ra các số nguyên có trong danh sách
    //Khi vượt quá phạm vi sử dụng cần huỷ tất cả các vùng nhớ được cấp phát cho các values của IntArr
    system("pause");
    return 0;
}
