class plate {
    int length = 5;
    int width = 9;
    plate() {
        System.out.println("Plate length= " + length + " and width=" + width);
    }
}
class box extends plate 
{
    int height = 2;
    box() 
    {
        System.out.println("Box length=" + length + ", width=" + width + " and height=" + height);
    }
}
public class wood extends box 
{
    int thickness = 1;
    wood() 
    {
        System.out.println("Wood length=" + length + ", width=" + width + ", height=" + height + " and thickness="+ thickness);
    }
    public static void main(String[] args) 
    {
        wood w = new wood();
        w.thickness=40;
    }
}