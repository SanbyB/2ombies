


class Wall{
    public:

        Wall();

        ~Wall();
    
    private:
        // position of wall
        int x, y;

        // wether wall is interactive
        bool interactive = false;
};