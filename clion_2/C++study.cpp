//
// Created by 29291 on 2024/11/10.
//
#include"iostream"

using namespace std;


// 主函数
int main()
{
    // 定义一个整型变量来存储用户输入的身高值
    int height;

    // 提示用户输入身高
    cout << "请输入身高：" << endl;

    // 循环接收用户输入，直到输入合法
    while (true) {
        cin >> height;

        // 检查输入是否合法
        if (cin.fail()) {
            // 清除输入流的错误标志
            cin.clear();
            // 忽略非法输入

            cout << "输入有误，请输入一个有效的整数：" << endl;
        } else {
            // 输入合法，跳出循环
            break;
        }
    }

    // 根据输入的身高值判断票价
    if (height < 0) {
        // 处理负数输入
        cout << "输入的身高不能为负数，请重新运行程序输入正确的身高。" << endl;
    } else if (height < 140) {
        // 如果身高小于140cm，提示可享受优惠票价
        cout << "可享受优惠，票价80元" << endl;
    } else {
        // 如果身高大于等于140cm，提示成人票价
        cout << "成人票，160元" << endl;
    }

    // 程序正常结束，返回0
    return 0;
}



