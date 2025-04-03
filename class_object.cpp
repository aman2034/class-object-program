(USING CLASS & OBJECT FIND AREA OF RECTANGLE)
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length, width;
    public:
    Rectangle(int l, int w)
    {
        length=l;
        width=w;
    }
        int area()
        {
            return length*width;
        }
};
main()
{
    Rectangle rect(3,5);
    cout<<rect.area()<<endl;
    return 0;
}
