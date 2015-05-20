class Vector {
    public:
        int getX();
        int getY();
        Vector operator + (Vector);
    private:
        int x;
        int y;
};
