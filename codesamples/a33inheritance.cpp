#include <iostream>

class Window
{
    public:
        void setWindowId(int);
        int getWindowId();
        void setIconType(int);
        virtual void copy();
        
    
    private:
        int windowId;
        int iconType;
};

void Window::copy()
{
    std::cout<<"windows copy function";
    
}

void Window::setIconType(int it){
    
    std::cout << "setIcon getting called";
    iconType =it;
}

void Window::setWindowId(int x)
{
    windowId=x;
}

int Window::getWindowId(){
    
    return windowId;
}


class PaintWindow :public Window
{
    public:
    
     void setGraphicsView(int);
     int getGraphicsView();
     void copy();
        
    
    private:
        int graphicsMode;
    
};


void PaintWindow::copy()
{
    std::cout <<"this is copy of paint, graphics copy";
}


void PaintWindow::setGraphicsView(int x){
    graphicsMode =x;
    
    
}
int  PaintWindow::getGraphicsView() { 
    return graphicsMode;
}
     

class CalcWindow:public Window
{
    public:
        void setTypeofCalculator(int x);
        int getTypeOfCalculator();
        void copy();
    
    private:
        int typeOfCalculator;
    
};

void CalcWindow::copy()
{
    
    std::cout<< "copy the result area calculator";
}


void CalcWindow::setTypeofCalculator(int x){ typeOfCalculator =x; }
        int CalcWindow::getTypeOfCalculator(){ return typeOfCalculator; }











#if 0
int main()
{
    CalcWindow calcWindow;
    calcWindow.setWindowId(23);
    calcWindow.setTypeofCalculator(1);
    calcWindow.setIconType(4);

    return 0;
}


int main()
{
    PaintWindow paintWindow;
    paintWindow.setIconType(1);
    paintWindow.setGraphicsView(2);
    paintWindow.copy();// althouugh calling virtual function, reference is of derived class
    //hence no runtime polymorphism
    return 0;
}

#endif

int main()
{
    Window *w=new PaintWindow;
    w->setIconType(1);
    w->copy();// this is runtime polymorphism.
    
    CalcWindow *cw = dynamic_cast<CalcWindow*>(w);
    if( cw != nullptr)
        cw->setTypeofCalculator(44);
    else
        std::cout <<" did not have a calculator object";
    // ok tell hwo to acess copy of windows thru w.. that is absurd why did we overirding.
    
    return 0;
}




