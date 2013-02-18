class Temp{
    private:
        int x, y, z, sum;
    public:
        void set_all_to_zero();
        void print_all();
        Temp(){
            x = 1;
            y = 1;
            z = 1;
        }

        Temp(int x1, int y1, int z1){
            x = x1;
            y = y1;
            z = z1;
        }
        Temp *operator +(Temp t);
        ~Temp(){
        }
    friend
        int sum_of_all(Temp &obj);
    //for every friend function, we need keyword friend before them
    friend
        Temp operator+(Temp &t1, Temp t2);
};
