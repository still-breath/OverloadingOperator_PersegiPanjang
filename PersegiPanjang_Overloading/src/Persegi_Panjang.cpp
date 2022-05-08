#include <iostream>
#include "include/Persegi_Panjang.hpp"

PersegiPanjang::PersegiPanjang(){}
PersegiPanjang::PersegiPanjang(float x_mid, float y_mid, float panjang, float lebar)
{
    this->xmax = x_mid + (panjang/2);
    this->xmin = x_mid - (panjang/2);
    this->ymax = y_mid + (lebar/2);
    this->ymin = y_mid - (lebar/2);
}

void PersegiPanjang::printHasil()
{
    float panjang, lebar, x_mid, y_mid;

    panjang = this->xmax - this->xmin;
    lebar   = this->ymax - this->ymin;

    std::cout << "Panjang           : " << panjang << std::endl;
    std::cout << "Lebar             : " << lebar << std::endl;
    std::cout << "Titik Tengah (x)  : " << this->xmin + panjang/2 << std::endl;
    std::cout << "Titik Tengah (y)  : " << this->ymin + lebar/2 << std::endl;
    std::cout << "X Max             : " << this->xmax << std::endl;
    std::cout << "X Min             : " << this->xmin << std::endl;
    std::cout << "Y Max             : " << this->ymax << std::endl;
    std::cout << "Y Min             : " << this->ymin << std::endl;
    std::cout << "\n" << std::endl;
}

void PersegiPanjang::wrongResult()
{
    std::cout << "Maaf, Kedua Persegi Panjang Tidak Beririsan" << std::endl;
}

bool PersegiPanjang::operator==(PersegiPanjang const&b2)
{
    if(this->xmax > b2.xmin && this->xmin < b2.xmax && this->ymax > b2.ymin && this->ymin < b2.ymax) return 1;
    else return 0;
}

PersegiPanjang PersegiPanjang::operator+(PersegiPanjang const &b2)
{
    std::cout << "Hasil Penggabungan 2 Persegi Panjang" << std::endl;
    std::cout << "====================================" << std::endl;
    PersegiPanjang temp;
    temp.xmax = std::max(this->xmax, b2.xmax);
    temp.ymax = std::max(this->ymax, b2.ymax);
    temp.xmin = std::min(this->xmin, b2.xmin);
    temp.ymin = std::min(this->ymin, b2.ymin);
    
    if(*this == b2) return temp;
}

PersegiPanjang PersegiPanjang::operator-(PersegiPanjang const &b2)
{
    std::cout << "Irisan dari 2 Persegi Panjang" << std::endl;
    std::cout << "=============================" << std::endl;
    PersegiPanjang temp;
    temp.xmax = std::min(this->xmax, b2.xmax);
    temp.ymax = std::min(this->ymax, b2.ymax);
    temp.xmin = std::max(this->xmin, b2.xmin);
    temp.ymin = std::max(this->ymin, b2.ymin);
    
    if(*this == b2) return temp;
}

void PersegiPanjang::operator++()
{
    float panjang, lebar, x_mid, y_mid;

    panjang = (this->xmax - this->xmin);
    lebar   = (this->ymax - this->ymin);

    x_mid   = this->xmax - (panjang/2);
    y_mid   = this->ymax - (lebar/2);

    panjang *=2;
    lebar   *=2;

    this->xmin = x_mid - (panjang/2);
    this->xmax = x_mid + (panjang/2);
    this->ymin = y_mid - (lebar/2);
    this->ymax = y_mid + (lebar/2);
}

void PersegiPanjang::operator--()
{
    float panjang, lebar, x_mid, y_mid;

    panjang = this->xmax - this->xmin;
    lebar   = this->ymax - this->ymin;

    x_mid   = this->xmax - (panjang/2);
    y_mid   = this->ymax - (lebar/2);

    panjang /=2;
    lebar   /=2;

    this->xmin = x_mid - (panjang/2);
    this->xmax = x_mid + (panjang/2);
    this->ymin = y_mid - (lebar/2);
    this->ymax = y_mid + (lebar/2);
}
void PersegiPanjang::operator++(int){}
void PersegiPanjang::operator--(int){}

float PersegiPanjang::operator[](int i){
    switch (i)
    {
    case 1:
        return this->xmin;
        break;
    case 2:
        return this->xmax;
        break;
    case 3:
        return this->ymin;
        break;
    case 4:
        return this->ymax;
        break;
    }
}
