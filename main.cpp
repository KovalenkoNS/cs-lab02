#include <iostream>
#include <vector>
using namespace std;
int main()
<<<<<<< HEAD
cout << "Enter A and B: ";
double a, b;
cin >> a >> b;
=======
<<<<<<< HEAD
>>>>>>> 062368fcb0a12738ccbb2d191c564362f42c465b
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
	 << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
vector <double> poisk(4);
poisk[0]=a+b;
poisk[1]=a-b;
poisk[2]=a*b;
poisk[3]=a/b;
double max=poisk[0];
    for(size_t i=0;i<3;i++)
    {
        if (max<poisk[i+1])
        {
            max=poisk[i+1];
        }
    }
cout <<"max="<<max<<'\n';
return 0;
=======
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    vector <double> poisk(4);
    poisk[0] = a + b;
    poisk[1] = a - b;
    poisk[2] = a * b;
    poisk[3] = a / b;
    double min = poisk[0];
    for (size_t i = 0; i < 3; i++)
    {
        if (min > poisk[i + 1])
        {
            min = poisk[i + 1];
        }
    }
    cout << "min=" << min << '\n';
    return 0;
>>>>>>> code: поиск минимума у Боба
}
