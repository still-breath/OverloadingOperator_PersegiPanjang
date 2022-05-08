#ifndef __PERSEGI_PANJANG_HPP__
#define __PERSEGI_PANJANG_HPP__

#include <iostream>

class PersegiPanjang{

    private :
        float xmin, xmax, ymin, ymax;

    public  :
        PersegiPanjang();
        PersegiPanjang(float x_mid, float y_mid, float panjang, float lebar);

        PersegiPanjang operator + (PersegiPanjang const &);
        PersegiPanjang operator - (PersegiPanjang const &);
        void operator ++ ();
        void operator ++ (int);
        void operator -- ();
        void operator -- (int);
        float operator[] (int);
        bool operator == (PersegiPanjang const &);

        void printHasil();
        void wrongResult();
};

#endif
