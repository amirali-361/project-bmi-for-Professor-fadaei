#include <iostream>
#include <clocale>

using namespace std;

int main() {
    // فعال‌سازی پشتیبانی زبان سیستم (برای فارسی)
    setlocale(LC_ALL, "");

    double weight, height, bmi;

    cout << "وزن خود را بر حسب کیلوگرم وارد کنید: ";
    cin >> weight;

    cout << "قد خود را بر حسب متر وارد کنید (مثال 1.75): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "\nشاخص توده بدنی (BMI) شما: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "وضعیت: کمبود وزن" << endl;
    } else if (bmi < 25) {
        cout << "وضعیت: وزن نرمال" << endl;
    } else if (bmi < 30) {
        cout << "وضعیت: اضافه وزن" << endl;
    } else {
        cout << "وضعیت: چاقی" << endl;
    }

    return 0;
}
