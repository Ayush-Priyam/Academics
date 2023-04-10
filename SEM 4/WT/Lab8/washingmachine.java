interface Motor
{
    int capacity=10;
    void run();
    void consume();
}

class washingmachine implements Motor 
{
    public void run() {
        System.out.println("WM's motor is running");
    }
    public void consume() {
        System.out.println("WM is consuming power");
    }
    public void details()
    {
        System.out.println("Data member value="+capacity);
    }
    public static void main(String args[]) {
        washingmachine w = new washingmachine();
        w.run();
        w.consume();
        w.details();
    }
}
