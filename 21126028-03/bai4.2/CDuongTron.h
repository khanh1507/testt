
class CDiem{
    private:
        double x;
        double y;
    public:
  
    CDiem();
    CDiem(double x,double y); 
    
    CDiem(const CDiem& t);

    ~CDiem();

    double get_x();
    double get_y();

    void set_x(double x);
    void set_y(double y);
    void input();
    void output();
    
    
};
class CDuongTron
{
private:
    CDiem O;
    double R;
public:
     CDuongTron();
     CDuongTron(double R);
     CDuongTron(const CDuongTron &dt);
     ~CDuongTron();

        CDiem get_O();
        double get_R();
    
        void set_O(CDiem O);
        void set_R(double R);
        void input();
        void output();

        double C();
        double S();
        
     
    };


