class Rectangle {
  private:
    int width;
    int length;

  public:
    void setWidth(int w);
    int getWidth();
    void setLength(int l);
    int getLength();
    int calcArea();
};

//default constructor
Rectangle::Rectangle(){
  length = 0;
  width = 0;
}

//Constructor with parameters
Rectangle::Rectangle(int l, int w) {
  length = l;
  width = w;
}