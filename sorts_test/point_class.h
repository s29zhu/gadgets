class Point{
    private:
        int x, y, z, sum;
    public:
        void set_all_to_zero();
        void print_all();
        Point(){
            x = 1;
            y = 1;
            z = 1;
        }

        Point(int x1, int y1, int z1){
            x = x1;
            y = y1;
            z = z1;
        }
        Point *operator +(Point t);
        ~Point(){
        }
    friend
        int sum_of_all(Point &obj);
    //for every friend function, we need keyword friend before them
    friend
        Point operator+(Point &t1, Point t2);
};
